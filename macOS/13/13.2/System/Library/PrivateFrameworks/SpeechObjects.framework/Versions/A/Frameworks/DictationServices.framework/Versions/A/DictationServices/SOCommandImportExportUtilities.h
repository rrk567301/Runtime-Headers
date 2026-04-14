@interface SOCommandImportExportUtilities : NSObject

+ (unsigned long long)maximumNumberOfAllowedEntries;
+ (BOOL)isSupportedCommandType:(id)a0;
+ (void)showOverflowAlertForWindow:(id)a0;

@end
