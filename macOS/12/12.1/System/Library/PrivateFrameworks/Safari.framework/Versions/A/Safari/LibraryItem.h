@class NSImage, NSString, NSArray;

@interface LibraryItem : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSImage *icon;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long badgeCount;
@property (copy, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL canShowTrailingButton;
@property (readonly, nonatomic) BOOL canShowContextMenu;
@property (readonly, nonatomic) BOOL isMovable;
@property (readonly, nonatomic) BOOL requiresHiddenToolbar;
@property (readonly, nonatomic) BOOL isExpandable;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) NSString *accessibilityIdentifier;

+ (id)iconForType:(long long)a0;
+ (id)titleForType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithType:(long long)a0 title:(id)a1;
- (id)initWithIcon:(id)a0 title:(id)a1 badgeCount:(long long)a2;
- (id)initWithType:(long long)a0 title:(id)a1 badgeCount:(long long)a2;

@end
