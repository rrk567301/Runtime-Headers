@class NSData, NSPrintInfoDictionaryProxy;

@interface NSPrintInfoAdditionalIVars : NSObject {
    struct OpaquePMPrintSession { } *printSession;
    struct OpaquePMPageFormat { } *pageFormat;
    struct OpaquePMPrintSettings { } *printSettings;
    NSData *flattenedPageFormatData;
    NSData *flattenedPrintSettingsData;
    char printSessionIsReconciled;
    char pageFormatIsReconciled;
    char printSettingsIsReconciled;
    char pageFormatIsValidated;
    char printSettingsIsValidated;
    NSPrintInfoDictionaryProxy *attributesDictionaryProxy;
    NSPrintInfoDictionaryProxy *printSettingsDictionaryProxy;
    char printerWasSetExplicitly;
}

@end
