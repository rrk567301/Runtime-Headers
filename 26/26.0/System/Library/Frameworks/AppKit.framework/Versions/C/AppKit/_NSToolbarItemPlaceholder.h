@class NSString, NSToolbar;

@interface _NSToolbarItemPlaceholder : NSObject {
    NSString *_itemIdentifier;
    NSToolbar *_tb;
    long long _visibilityPriority;
    BOOL _hasCustomVisibilityPriority;
}

@property (retain, nonatomic) id propertyListRepresentation;

- (id)itemIdentifier;
- (id)toolbar;
- (void).cxx_destruct;
- (BOOL)_hasCustomVisibilityPriority;
- (void)_setToolbar:(id)a0;
- (id)_toolbar;
- (id)initWithItemIdentifier:(id)a0;
- (BOOL)isTrackingSeparator;
- (void)setVisibilityPriority:(long long)a0;
- (long long)visibilityPriority;

@end
