@class NSString, NSImage, NSArray, NSMapTable;
@protocol TabBarViewItem;

@interface UnifiedTabBarItem : NSObject {
    NSMapTable *_accessoryViewOptions;
}

@property (weak, nonatomic) id<TabBarViewItem> owner;
@property (nonatomic) unsigned long long browsingMode;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *placeholderImage;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *activeLabel;
@property (copy, nonatomic) NSString *placeholderLabel;
@property (copy, nonatomic) NSArray *accessoryViews;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) BOOL isDropLocationPlaceholder;

+ (id)dropLocationPlaceholderItem;

- (void)insertAccessoryView:(id)a0 atIndex:(long long)a1 withOptions:(id)a2;
- (void)removeAccessoryView:(id)a0;
- (id)init;
- (id)optionsForAccessoryView:(id)a0;
- (void)addAccessoryView:(id)a0 withOptions:(id)a1;
- (void)setOptions:(id)a0 forAccessoryView:(id)a1;
- (void).cxx_destruct;

@end
