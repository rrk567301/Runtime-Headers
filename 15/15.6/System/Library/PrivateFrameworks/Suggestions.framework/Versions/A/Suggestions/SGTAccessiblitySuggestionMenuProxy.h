@class NSView;

@interface SGTAccessiblitySuggestionMenuProxy : NSObject {
    id parent;
    NSView *menu;
}

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsIgnored;
- (id)initWithParent:(id)a0 menu:(id)a1;

@end
