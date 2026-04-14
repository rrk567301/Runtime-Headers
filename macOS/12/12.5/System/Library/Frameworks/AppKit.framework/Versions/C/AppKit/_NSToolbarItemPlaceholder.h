@class NSString, NSToolbar;

@interface _NSToolbarItemPlaceholder : NSObject {
    NSString *_itemIdentifier;
    NSToolbar *_tb;
    long long _visibilityPriority;
    BOOL _hasCustomVisibilityPriority;
}

@property (retain, nonatomic) id propertyListRepresentation;

- (void)dealloc;
- (id)itemIdentifier;
- (id)initWithItemIdentifier:(id)a0;
- (long long)visibilityPriority;
- (BOOL)isSeparator;
- (id)toolbar;
- (void)setVisibilityPriority:(long long)a0;
- (id)_toolbar;
- (void)_setToolbar:(id)a0;
- (BOOL)_hasCustomVisibilityPriority;

@end
