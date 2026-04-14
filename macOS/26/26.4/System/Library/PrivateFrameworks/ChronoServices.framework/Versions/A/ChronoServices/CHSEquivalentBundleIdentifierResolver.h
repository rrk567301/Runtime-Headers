@interface CHSEquivalentBundleIdentifierResolver : NSObject <CHSEquivalentBundleIdentifierResolving> {
    void /* unknown type, empty encoding */ categoriesPrimitives;
}

+ (id)defaultResolver;

- (void).cxx_destruct;
- (id)init;
- (id)equivalentBundleIdentifiersForBundleIdentifier:(id)a0;
- (id)initWithCategoriesPrimitives:(id)a0;

@end
