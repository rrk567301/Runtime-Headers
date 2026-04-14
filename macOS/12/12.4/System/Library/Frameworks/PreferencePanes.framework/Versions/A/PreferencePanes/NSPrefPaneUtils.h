@interface NSPrefPaneUtils : NSObject

+ (BOOL)hasBattery;
+ (double)_windowWidth;
+ (id)stringForModifiers:(unsigned long long)a0;
+ (id)stringForSymbolicKey:(unsigned long long)a0;
+ (long long)showAllScrollViewWidth;
+ (void)enableControls:(BOOL)a0 inView:(id)a1 deep:(BOOL)a2;
+ (id)_labelForVirtualKey:(unsigned long long)a0 useNamesWhenPossible:(BOOL)a1;
+ (id)humanStringForModifiers:(unsigned long long)a0;
+ (id)_stringForVirtualKey:(unsigned long long)a0 modifiers:(unsigned long long)a1 useNamesWhenPossible:(BOOL)a2;
+ (BOOL)isFunctionKey:(unsigned long long)a0;
+ (BOOL)_needFN;
+ (id)_stringForCharacterCode:(id)a0 useNamesWhenPossible:(BOOL)a1;
+ (BOOL)_isFunctionCharCodeKey:(id)a0;
+ (id)stringForSymbolicKey:(unsigned long long)a0 respectFN:(BOOL)a1;
+ (id)sharedPrefPaneUtils;
+ (BOOL)isTimeMachineEnabled;
+ (id)_labelForVirtualKey:(unsigned long long)a0;
+ (id)humanStringForVirtualKey:(unsigned long long)a0 modifiers:(unsigned long long)a1;
+ (id)humanStringForCharacterCode:(id)a0 modifiers:(unsigned long long)a1;
+ (id)stringForVirtualKey:(unsigned long long)a0 modifiers:(unsigned long long)a1;
+ (id)stringForCharacterCode:(id)a0 modifiers:(unsigned long long)a1;
+ (id)_metricsTable;
+ (long long)showAllColumnWidth;
+ (id)centerTruncateString:(id)a0 toFit:(long long)a1;

@end
