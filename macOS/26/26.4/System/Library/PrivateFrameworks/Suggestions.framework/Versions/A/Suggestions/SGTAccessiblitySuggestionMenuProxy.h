@class NSView;

@interface SGTAccessiblitySuggestionMenuProxy : NSObject {
    id parent;
    NSView *menu;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)initWithParent:(id)a0 menu:(id)a1;

@end
