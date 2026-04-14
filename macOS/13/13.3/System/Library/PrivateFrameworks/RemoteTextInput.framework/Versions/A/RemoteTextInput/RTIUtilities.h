@interface RTIUtilities : NSObject

+ (id)_attributedStringWithoutDefaultAttributes:(id)a0;
+ (id)_filteredAttributedString:(id)a0 validAttributes:(id)a1;
+ (id)customInfoClassesForType:(id)a0 forClass:(Class)a1;
+ (id)customInfoDictionary;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1 forClass:(Class)a2;
+ (void)unregisterCustomInfoType:(id)a0 forClass:(Class)a1;

@end
