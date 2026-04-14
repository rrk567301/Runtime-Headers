@class NSToolbarItem, NSString, NSView, NSArray, VUINSBarButtonItem;
@protocol VUINSNavigationBarVisibilityThresholdProviding;

@interface VUINSNavigationItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSView *titleView;
@property (nonatomic) BOOL hideTitle;
@property (retain, nonatomic) VUINSBarButtonItem *backBarButtonItem;
@property (copy, nonatomic) NSString *backButtonTitle;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic) BOOL useEdgeAppearance;
@property (copy, nonatomic) NSArray *leftBarButtonItems;
@property (copy, nonatomic) NSArray *rightBarButtonItems;
@property (copy, nonatomic) NSArray *legacyLeftBarButtonItems;
@property (copy, nonatomic) NSArray *legacyRightBarButtonItems;
@property (retain, nonatomic) VUINSBarButtonItem *legacyLeftBarButtonItem;
@property (retain, nonatomic) VUINSBarButtonItem *legacyRightBarButtonItem;
@property (retain, nonatomic) NSToolbarItem *centerDisplayItem;
@property (weak, nonatomic) id<VUINSNavigationBarVisibilityThresholdProviding> visibilityThresholdProvider;
@property (nonatomic) long long largeTitleDisplayMode;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;

@end
