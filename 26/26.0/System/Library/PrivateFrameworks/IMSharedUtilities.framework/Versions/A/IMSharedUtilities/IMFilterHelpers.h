@interface IMFilterHelpers : NSObject

+ (BOOL)areTransactionsPromotionsPriorityAvailable;
+ (unsigned long long)defaultPrimaryFilterMode;
+ (long long)filterModeCombinedValue:(unsigned long long)a0;
+ (id)filterModeStringValue:(unsigned long long)a0;
+ (void)invalidateDefaultPrimaryFilterModeCache;
+ (BOOL)isTimeSensitiveCustomModelAvailable;
+ (void)registerForFiltrationSettingChangeNotifications;

- (id)init;

@end
