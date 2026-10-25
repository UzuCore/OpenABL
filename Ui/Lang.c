/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Copyright (C) 2026-present Open Handheld Collective
 *   https://github.com/OpenHandheldCollective
 */

/**
  Lang - the menu's strings in English and Korean.

  Scripts/mkfont.py reads the string literals here for the characters the
  CJK face needs, so every string the menu draws belongs in this file.
*/

#include "Ui/Lang.h"
#include "Base/Text.h"
#include "Core/Settings.h"

_Static_assert (LANG_COUNT == SETTINGS_LANGUAGES, "languages");

STATIC CONST LANG_STRINGS mEn = {
  .Language          = "Language",
  .SectionBoot       = "Boot",
  .SectionSettings   = "Settings",
  .SectionSystem     = "System",
  .Start             = "Start",
  .StartLinux        = "Start Linux",
  .StartAndroid      = "Start Android",
  .BootEntries       = "Boot entries",
  .BootImage         = "Boot image",
  .DefaultFile       = "EFI loader",
  .RestartBootloader = "Restart bootloader",
  .RecoveryMode      = "Recovery mode",
  .Edl               = "Emergency download mode",
  .OtherSlot         = "Boot other slot",
  .BootMode          = "Boot mode",
  .AblMode           = "ABL mode",
  .Verbose           = "Verbose",
  .Silent            = "Silent",
  .VolumeUp          = "Volume up at boot",
  .VolLinuxExternal  = "Linux (external)",
  .VolRecovery       = "Recovery",
  .BootSource        = "Boot source",
  .Auto              = "Auto",
  .Internal          = "Internal",
  .SdCard            = "SD card",
  .Charging          = "Off-mode charging",
  .On                = "On",
  .Off               = "Off",
  .Rotation          = "Display rotation",
  .ReverseVolume     = "Reverse volume +/-",
  .CustomLogo        = "Custom boot logo",
  .RotationAuto      = "Auto ({}°)",
  .Timeout           = "Menu timeout",
  .Seconds           = "{} s",
  .DeviceModel       = "Device model",
  .NotSet            = "Not set",
  .UninstallCfw      = "Uninstall CFW",
  .PowerOff          = "Power off",
  .ToastTargetExited = "The boot target exited",
  .ToastAndroidInAbl = "Android is chosen in the ABL's own menu",
  .ToastFirmwareDt   = "Using the firmware's devicetree",
  .ToastModelSet     = "Device model set to {}",
  .LookingOn         = "Looking for Linux on {}",
  .SrcFirstDrive     = "the first bootable drive",
  .SrcInternal       = "internal storage",
  .SrcSd             = "the SD card",
  .Countdown         = "Starting {0} in {1} s",
  .AnyKeyToStay      = "Any key to stay",
  .InfoRam           = "RAM",
  .InfoStorage       = "Storage",
  .InfoDisplay       = "Display",
  .InfoModel         = "Model",
  .InfoPanel         = "Panel",
  .DeviceInfo        = "Device info",
  .Log               = "Log",
  .SectionDebug      = "Debug",
  .DbgUsbLive        = "Live USB host",
  .DbgQuiesce        = "Park display",
  .DbgPanelLines     = "Panel lines off",
  .InfoChip          = "Chip",
  .InfoPlatform      = "Platform",
  .InfoPmic          = "PMIC",
  .InfoStorageChip   = "Storage chip",
  .InfoAndroid       = "Android build",
  .InfoBootloader    = "Bootloader",
  .InfoUefi          = "UEFI firmware",
  .HintMove          = "Up and Down",
  .HintSelect        = "Select",
  .HintBack          = "Back",
  .NoDeviceTrees     = "No device trees found",
  .OneModel          = "1 model found",
  .NModels           = "{} models found",
  .Current           = "Current",
  .FirmwareDefault   = "Firmware default",
  .Back              = "Back",
  .ModelExplain = "The model picks which device tree Linux boots with, and the "
                  "display rotation.",
  .FirmwareDtExplain =
    "Boot with the devicetree the firmware already provides, unchanged.",
  .FoundIn        = " Found in {}.",
  .EntriesExplain = "Pick one to start it now. Start tries them in this order.",
  .NoTriesLeft    = "No tries left",
  .Default        = "Default",
  .BackToMenu     = "Back to the menu.",
  .LookingForDts  = "Looking for device trees",
  .FewSeconds     = "This can take a few seconds.",
  .StartingAndroid = "Starting Android",
  .StartingLinux   = "Starting Linux",
  .Starting        = "Starting {}",
  .ErrNoImageTitle = "Couldn't boot Linux",
  .ErrNoImageMsg   = "No bootable image was found on the selected boot source.",
  .ErrNoImageHint  = "Check the drive, or change Boot source in the menu.",
  .ErrLoadTitle    = "Couldn't start Linux",
  .ErrLoadHint =
    "Check the boot files on the drive, or change Boot source in the menu.",
  .ErrBootImageFailed =
    "The boot image didn't pass verification, or didn't start.",
  .ErrAndroidTitle       = "Android boot isn't available",
  .ErrAndroidMsg         = "This build can't start Android on this device yet.",
  .ErrAndroidHint        = "Set Boot mode to Linux in the menu.",
  .ErrAndroidFailedTitle = "Couldn't start Android",
  .ErrAndroidFailedMsg   = "Android's boot images didn't start.",
  .ErrAndroidFailedHint  = "The Log screen says why. Check the Android "
                          "partitions, or set Boot mode to Linux.",
  .ErrModelTitle = "Device model isn't set",
  .ErrModelMsg =
    "Linux needs your device model to choose the right device tree.",
  .PressAnyKeyMenu       = "Press any key to return to the menu",
  .PressAnyKeyModel      = "Press any key to choose your model",
  .ConfirmUninstallTitle = "Uninstall CFW?",
  .ConfirmUninstallMsg   = "Erases these partitions, and all of Android's "
                           "data with them:",
  .ConfirmUninstall      = "Uninstall",
  .ConfirmUninstallFinalTitle = "Erase for good?",
  .ConfirmUninstallFinalMsg =
    "The device restarts into recovery, which wipes Android's data. This "
    "can't be undone.",
  .ConfirmUninstallFinal = "Erase",
  .ConfirmEdlTitle       = "Enter emergency download mode?",
  .ConfirmEdlMsg = "The screen stays off in this mode. You'll need a computer "
                   "with Qualcomm flashing tools to leave it.",
  .ConfirmEdl    = "Enter EDL",
  .Cancel        = "Cancel",
  .AblSettingFailed    = "The ABL couldn't change that setting",
  .AblModelFailed      = "The ABL couldn't save the device model",
  .AblNotAnswering     = "The ABL stopped answering",
  .AblRestartFailed    = "The ABL couldn't restart ({})",
  .RestartingToScan    = "Restarting to scan",
  .RestartToScanFailed = "Couldn't restart to scan",
  .ModelScanFailed     = "Couldn't look for device models",
  .AblActionFailed     = "The ABL couldn't do that",
  .PowerOffFailed      = "Couldn't power off",
  .RestartingRecovery  = "Restarting into recovery",
  .CfwRemoved          = "Linux is removed. Recovery wipes Android's data next.",
  .WipeInRecovery      = "Linux is removed. Choose Factory reset in recovery to "
                         "wipe Android's data.",
  .UninstallFailed     = "Uninstall failed",
  .Uninstalling        = "Uninstalling CFW",
  .DontTurnOff         = "Don't turn off the device.",
  .UninstallNotFound   = "Linux is no longer on internal storage.",
  .UninstallUntrusted  = "The partition table can't be trusted, so nothing "
                         "was changed.",
  .UninstallWriteFailed = "Writing the partition table failed ({}).",
  .UninstallReadBack   = "The partition table didn't read back as written.",
  .UninstallError      = "Something went wrong ({}).",
  .ErrWipeTitle        = "Linux is removed",
  .WipeByHand          = "Android couldn't be made the boot mode. Set Boot Mode "
                         "to Android, then choose Factory reset in recovery.",
  .Unknown             = "Unknown",
  .NotInserted         = "Not inserted",
  .SrcAblScan          = "the ABL's scan",
  .EntryType1          = "BLS entry",
  .EntryUki            = "Unified kernel image",
  .InternalStorage     = "Internal storage",
  .RemovableStorage    = "Removable storage",
};

STATIC CONST LANG_STRINGS mKo = {
  .Language                  = "언어",
  .SectionBoot               = "부팅",
  .SectionSettings           = "설정",
  .SectionSystem             = "시스템",
  .Start                     = "시작",
  .StartLinux                = "Linux 시작",
  .StartAndroid              = "Android 시작",
  .BootEntries               = "부팅 항목",
  .BootImage                 = "부팅 이미지",
  .DefaultFile               = "EFI 로더",
  .RestartBootloader         = "부트로더로 재시작",
  .RecoveryMode              = "복구 모드",
  .Edl                       = "긴급 다운로드 모드 (EDL)",
  .OtherSlot                 = "다른 슬롯으로 부팅",
  .BootMode                  = "부팅 모드",
  .AblMode                   = "ABL 모드",
  .Verbose                   = "상세 출력",
  .Silent                    = "출력 안 함",
  .VolumeUp                  = "부팅 시 볼륨+ 버튼",
  .VolLinuxExternal          = "Linux (외부 저장소)",
  .VolRecovery               = "복구 모드",
  .BootSource                = "부팅 위치",
  .Auto                      = "자동",
  .Internal                  = "내부 저장소",
  .SdCard                    = "SD 카드",
  .Charging                  = "전원이 꺼진 상태에서 충전",
  .On                        = "켜기",
  .Off                       = "끄기",
  .Rotation                  = "화면 회전",
  .ReverseVolume             = "볼륨 +/- 반전",
  .CustomLogo                = "사용자 부팅 로고",
  .RotationAuto              = "자동 ({}°)",
  .Timeout                   = "자동 부팅 대기 시간",
  .Seconds                   = "{}초",
  .DeviceModel               = "기기 모델",
  .NotSet                    = "설정 안 됨",
  .UninstallCfw              = "CFW 제거",
  .PowerOff                  = "전원 끄기",
  .ToastTargetExited         = "부팅 대상이 종료되었습니다",
  .ToastAndroidInAbl         = "Android는 ABL 자체 메뉴에서 선택합니다",
  .ToastFirmwareDt           = "펌웨어의 장치 트리를 사용합니다",
  .ToastModelSet             = "기기 모델을 {}(으)로 설정했습니다",
  .LookingOn                 = "{}에서 Linux 찾는 중",
  .SrcFirstDrive             = "첫 번째 부팅 가능한 드라이브",
  .SrcInternal               = "내부 저장소",
  .SrcSd                     = "SD 카드",
  .Countdown                 = "{1}초 후 {0} 시작",
  .AnyKeyToStay              = "아무 키나 누르면 메뉴에 머뭅니다",
  .InfoRam                   = "메모리",
  .InfoStorage               = "저장소",
  .InfoDisplay               = "화면",
  .InfoModel                 = "모델",
  .InfoPanel                 = "패널",
  .DeviceInfo                = "기기 정보",
  .Log                       = "로그",
  .SectionDebug              = "디버그",
  .DbgUsbLive                = "USB 호스트 실시간 전환",
  .DbgQuiesce                = "부팅 전 화면 끄기",
  .DbgPanelLines             = "패널 백라이트 및 전원 끄기",
  .InfoChip                  = "칩",
  .InfoPlatform              = "플랫폼",
  .InfoPmic                  = "전원 관리 칩",
  .InfoStorageChip           = "저장소 칩",
  .InfoAndroid               = "Android 빌드",
  .InfoBootloader            = "부트로더",
  .InfoUefi                  = "UEFI 펌웨어",
  .HintMove                  = "위아래 이동",
  .HintSelect                = "선택",
  .HintBack                  = "뒤로",
  .NoDeviceTrees             = "장치 트리를 찾지 못했습니다",
  .OneModel                  = "모델 1개 발견",
  .NModels                   = "모델 {}개 발견",
  .Current                   = "현재",
  .FirmwareDefault           = "펌웨어 기본값",
  .Back                      = "뒤로",
  .ModelExplain =
    "모델에 따라 Linux 부팅에 사용할 장치 트리와 화면 방향이 "
    "결정됩니다.",
  .FirmwareDtExplain =
    "펌웨어가 제공하는 장치 트리를 변경 없이 사용하여 "
    "부팅합니다.",
  .FoundIn                   = " {}에서 발견했습니다.",
  .EntriesExplain =
    "항목을 선택하면 바로 시작합니다. '시작'은 이 순서대로 부팅을 "
    "시도합니다.",
  .NoTriesLeft               = "남은 부팅 시도 횟수 없음",
  .Default                   = "기본값",
  .BackToMenu                = "메뉴로 돌아갑니다.",
  .LookingForDts             = "장치 트리 찾는 중",
  .FewSeconds                = "몇 초 정도 걸릴 수 있습니다.",
  .StartingAndroid           = "Android 시작 중",
  .StartingLinux             = "Linux 시작 중",
  .Starting                  = "{} 시작 중",
  .ErrNoImageTitle           = "Linux 부팅 실패",
  .ErrNoImageMsg =
    "선택한 부팅 위치에서 부팅 가능한 이미지를 찾지 못했습니다.",
  .ErrNoImageHint =
    "드라이브를 확인하거나 메뉴에서 부팅 위치를 변경하세요.",
  .ErrLoadTitle              = "Linux 시작 실패",
  .ErrLoadHint =
    "드라이브의 부팅 파일을 확인하거나 메뉴에서 부팅 위치를 "
    "변경하세요.",
  .ErrBootImageFailed =
    "부팅 이미지 검증에 실패했거나 시작하지 못했습니다.",
  .ErrAndroidTitle           = "Android 부팅을 사용할 수 없음",
  .ErrAndroidMsg =
    "이 빌드는 아직 이 기기의 Android 부팅을 지원하지 않습니다.",
  .ErrAndroidHint            = "메뉴에서 부팅 모드를 Linux로 설정하세요.",
  .ErrAndroidFailedTitle     = "Android 시작 실패",
  .ErrAndroidFailedMsg       = "Android 부팅 이미지를 시작하지 못했습니다.",
  .ErrAndroidFailedHint =
    "로그 화면에서 원인을 확인하세요. Android 파티션을 확인하거나 "
    "부팅 모드를 Linux로 설정하세요.",
  .ErrModelTitle             = "기기 모델이 설정되지 않음",
  .ErrModelMsg =
    "Linux가 올바른 장치 트리를 선택하려면 기기 모델이 필요합니다.",
  .PressAnyKeyMenu           = "아무 키나 누르면 메뉴로 돌아갑니다",
  .PressAnyKeyModel          = "아무 키나 누르면 모델을 선택합니다",
  .ConfirmUninstallTitle     = "CFW를 제거할까요?",
  .ConfirmUninstallMsg =
    "다음 파티션과 Android의 모든 데이터가 삭제됩니다:",
  .ConfirmUninstall          = "제거",
  .ConfirmUninstallFinalTitle = "데이터를 영구 삭제할까요?",
  .ConfirmUninstallFinalMsg =
    "기기가 복구 모드로 재시작하여 Android의 모든 데이터를 "
    "삭제합니다. 이 작업은 되돌릴 수 없습니다.",
  .ConfirmUninstallFinal     = "삭제",
  .ConfirmEdlTitle           = "긴급 다운로드 모드로 진입할까요?",
  .ConfirmEdlMsg =
    "이 모드에서는 화면이 꺼져 있습니다. 모드를 종료하려면 Qualcomm "
    "플래싱 도구가 설치된 컴퓨터가 필요합니다.",
  .ConfirmEdl                = "EDL 진입",
  .Cancel                    = "취소",
  .AblSettingFailed          = "ABL이 설정을 변경하지 못했습니다",
  .AblModelFailed            = "ABL이 기기 모델을 저장하지 못했습니다",
  .AblNotAnswering           = "ABL이 응답하지 않습니다",
  .AblRestartFailed          = "ABL 재시작 실패 ({})",
  .RestartingToScan          = "검색을 위해 재시작 중",
  .RestartToScanFailed       = "검색을 위한 재시작 실패",
  .ModelScanFailed           = "기기 모델을 찾지 못했습니다",
  .AblActionFailed           = "ABL이 작업을 수행하지 못했습니다",
  .PowerOffFailed            = "전원을 끄지 못했습니다",
  .RestartingRecovery        = "복구 모드로 재시작 중",
  .CfwRemoved =
    "Linux가 제거되었습니다. 다음으로 복구 모드에서 Android 데이터를 "
    "삭제합니다.",
  .WipeInRecovery =
    "Linux가 제거되었습니다. 복구 모드에서 Factory reset을 선택하여 "
    "Android 데이터를 삭제하세요.",
  .UninstallFailed           = "제거 실패",
  .Uninstalling              = "CFW 제거 중",
  .DontTurnOff               = "기기의 전원을 끄지 마세요.",
  .UninstallNotFound         = "내부 저장소에 Linux가 없습니다.",
  .UninstallUntrusted =
    "파티션 테이블을 신뢰할 수 없어 아무것도 변경하지 "
    "않았습니다.",
  .UninstallWriteFailed      = "파티션 테이블 쓰기 실패 ({}).",
  .UninstallReadBack =
    "다시 읽은 파티션 테이블이 기록한 내용과 일치하지 않습니다.",
  .UninstallError            = "오류가 발생했습니다 ({}).",
  .ErrWipeTitle              = "Linux 제거 완료",
  .WipeByHand =
    "부팅 모드를 Android로 설정하지 못했습니다. 부팅 모드를 Android로 "
    "설정한 뒤 복구 모드에서 Factory reset을 선택하세요.",
  .Unknown                   = "알 수 없음",
  .NotInserted               = "삽입 안 됨",
  .SrcAblScan                = "ABL 검색",
  .EntryType1                = "BLS 부팅 항목",
  .EntryUki                  = "통합 커널 이미지",
  .InternalStorage           = "내부 저장소",
  .RemovableStorage          = "이동식 저장소",
};

STATIC CONST LANG_STRINGS *CONST mLangs[LANG_COUNT] = {
  [LANG_EN] = &mEn,
  [LANG_KO] = &mKo,
};

// Each language's name in itself, for the Language setting.
STATIC CONST CHAR8 *CONST mNames[LANG_COUNT] = {
  [LANG_EN] = "English",
  [LANG_KO] = "한국어",
};

CONST LANG_STRINGS *gStrings = &mEn;

VOID
LangSet (IN UINT8 Lang)
{
  gStrings = mLangs[Lang < LANG_COUNT ? Lang : LANG_EN];
}

CONST CHAR8 *
LangName (IN UINT8 Lang)
{
  return mNames[Lang < LANG_COUNT ? Lang : LANG_EN];
}

VOID
LangFill (
  OUT CHAR8             *Out,
  IN UINTN               Cap,
  IN CONST CHAR8        *Template,
  IN CONST CHAR8 *CONST *Args,
  IN UINTN               ArgCount
)
{
  UINTN Length = 0;
  UINTN Next   = 0;

  if (!Cap) {
    return;
  }
  while (*Template && Length + 1 < Cap) {
    CONST CHAR8 *Arg = NULL;

    if (Template[0] == '{' && Template[1] == '}') {
      Arg = Next < ArgCount ? Args[Next] : "";
      Next++;
      Template += 2;
    } else if (Template[0] == '{' && Template[1] >= '0' && Template[1] <= '9' &&
               Template[2] == '}') {
      UINTN Which = (UINTN)(Template[1] - '0');
      Arg         = Which < ArgCount ? Args[Which] : "";
      Template += 3;
    }
    if (Arg) {
      while (*Arg && Length + 1 < Cap) {
        Out[Length++] = *Arg++;
      }
    } else {
      Out[Length++] = *Template++;
    }
  }
  Out[Length] = 0;
}
