@class CNUIUserActionItem, NSString, CNUIUserActionListModel;
@protocol CNLSApplicationWorkspace;

@interface CNContactActionsDisambiguationMenuGenerator : NSObject

@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) CNUIUserActionListModel *model;
@property (readonly, nonatomic) CNUIUserActionItem *defaultAction;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, copy, nonatomic) id /* block */ menuItemForActionItem;

+ (id)labelForActionItem:(id)a0 usingApplicationWorkspace:(id)a1 capitalize:(BOOL)a2;
+ (id)titleMenuItemWithLabel:(id)a0;
+ (id)actionTitleAttributes;
+ (id)menuItemLabelWithActionLabel:(id)a0 secondaryLabel:(id)a1;
+ (double)maxWidthOfMenuItemList:(id)a0;
+ (id)adjustTabOfAttributedString:(id)a0 withTabOffset:(double)a1;
+ (id)paragraphStyleWithTabOffset:(double)a0;
+ (double)widthOfSpace;
+ (id)labelAttributes;
+ (id)unlocalizedLabelFromActionItem:(id)a0;
+ (id)capitalizedDisplayLabelFromLabel:(id)a0;
+ (id)TTYPostfixedLabelFromLabel:(id)a0 forActionItem:(id)a1;
+ (id)trademarkLabelByLowercaseTrademarkLabel;
+ (id)TTYPostfixFormatStringForActionItem:(id)a0;
+ (id)secondaryLabelAttributes;

- (void).cxx_destruct;
- (id)menuItemForActionItem:(id)a0;
- (id)titleMenuItem;
- (id)menuItemsForActions;
- (id)menuItemsForDirectoryServiceActions;
- (id)menuItemsForFoundOnDeviceActions;
- (void)markTheDefaultItem:(id)a0;
- (void)adjustTabStopForMaximumWidth:(id)a0;
- (id)initWithTarget:(id)a0 model:(id)a1 actionType:(id)a2 applicationWorkspace:(id)a3;
- (id)makeMenu;

@end
