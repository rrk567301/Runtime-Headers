@class NSVisualEffectView;

@interface CNContactListView : ABMainListOutlineView

@property (retain, nonatomic) NSVisualEffectView *visualEffectView;
@property (nonatomic, getter=isGroupListVisible) BOOL groupListVisible;
@property (nonatomic, getter=isContactCardVisible) BOOL contactCardVisible;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)awakeFromNib;
- (void)updateVisualEffectView;
- (void)addVisualEffectView;

@end
