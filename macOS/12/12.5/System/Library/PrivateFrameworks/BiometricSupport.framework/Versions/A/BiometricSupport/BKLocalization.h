@interface BKLocalization : NSObject

+ (BOOL)isiPad;
+ (id)getLocalizedString:(id)a0;
+ (id)getLocalizedString:(id)a0 fromStringTable:(id)a1 withBundle:(id)a2 defaultValue:(id)a3;
+ (id)getStringFromBundleLocalizationTable:(id)a0 withBundle:(id)a1 inLocalization:(id)a2 fromTable:(id)a3;
+ (id)getLocalizedString:(id)a0 fromFile:(id)a1;

@end
