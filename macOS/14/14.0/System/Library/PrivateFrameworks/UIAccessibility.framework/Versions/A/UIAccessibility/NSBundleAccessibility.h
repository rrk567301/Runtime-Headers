@interface NSBundleAccessibility : __NSBundleAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)loadAndReturnError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;

@end
