@class NSDictionary, _NSQuickActionPresentation, NSMapTable;

@interface _NSQuickActionConfiguration : NSObject {
    _NSQuickActionPresentation *_presentation;
    NSDictionary *_indexByIdentifier;
    NSMapTable *_activePreferences;
}

- (void)save;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPresentation:(id)a0;
- (void)setActive:(BOOL)a0 forQuickAction:(id)a1;
- (void)setOrderedQuickActions:(id)a0;

@end
