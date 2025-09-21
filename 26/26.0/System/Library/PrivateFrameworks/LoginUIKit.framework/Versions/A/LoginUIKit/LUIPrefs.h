@class NSArray, NSString;

@interface LUIPrefs : NSObject

@property (class, readonly) NSArray *recentUsers;
@property (class) NSString *bigClockFontIdentifier;
@property (class) double bigClockFontWeight;

+ (void)synchronize;
+ (id)_defaults;
+ (BOOL)_boolValueForKey:(id)a0 valueExists:(BOOL *)a1;
+ (id)_dictionaryForKey:(id)a0 valueExists:(BOOL *)a1;
+ (float)_floatValueForKey:(id)a0 valueExists:(BOOL *)a1;
+ (id)_fvunlockPreferences;
+ (long long)_integerValueForKey:(id)a0 valueExists:(BOOL *)a1;
+ (id)_stringArrayForKey:(id)a0;
+ (id)_valueForKey:(id)a0 ofClass:(Class)a1 valueExists:(BOOL *)a2;

@end
