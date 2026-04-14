@interface PFString : NSObject

+ (id)localizedStringWithFormat:(id)a0;
+ (id)defaultTable;
+ (id)localizedString:(id)a0 fromTable:(id)a1;
+ (id)localizedString:(id)a0;
+ (id)_localizedString:(id)a0 fromTable:(id)a1 logError:(BOOL)a2 formatMissingForDebugging:(BOOL)a3;
+ (id)localizedStringIfExists:(id)a0 fromTable:(id)a1;
+ (id)localizedStringForNumber:(id)a0 withFormat:(id)a1;
+ (id)localizedStringWithKey:(id)a0 arguments:(char *)a1;
+ (id)localizedStringIfExists:(id)a0;
+ (id)localizedStringForInteger:(long long)a0;
+ (id)localizedStringForDateRangeFrom:(id)a0 to:(id)a1 options:(id)a2;
+ (id)localizedStringForDateRangeFrom:(id)a0 to:(id)a1;

@end
