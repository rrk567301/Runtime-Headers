@class NSString, NSArray, NSAttributedString, CNUIUserActionItem;

@interface CNUIContactCardActionMenuItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) BOOL shouldDisplayInline;
@property (readonly, nonatomic) CNUIUserActionItem *actionItem;
@property (readonly, nonatomic) NSArray *menuItems;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 imageName:(id)a2 shouldDisplayInline:(BOOL)a3 menuItems:(id)a4;
- (id)initWithAttributedTitle:(id)a0 actionItem:(id)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 imageName:(id)a2 shouldDisplayInline:(BOOL)a3 actionItem:(id)a4;

@end
