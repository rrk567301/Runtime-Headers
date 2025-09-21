@class NSDictionary, _NSQuickActionPresentation, NSMapTable;

@interface _NSQuickActionConfiguration : NSObject {
    _NSQuickActionPresentation *_presentation;
    NSDictionary *_indexByIdentifier;
    NSMapTable *_activePreferences;
}

- (id)init;
- (void).cxx_destruct;
- (void)save;
- (id)initWithPresentation:(id)a0;
- (void)setActive:(char)a0 forQuickAction:(id)a1;
- (void)setOrderedQuickActions:(id)a0;

@end
