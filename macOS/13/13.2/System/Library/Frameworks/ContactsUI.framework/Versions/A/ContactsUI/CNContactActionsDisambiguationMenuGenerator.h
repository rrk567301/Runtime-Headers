@class CNUIUserActionItem, NSString, CNUIUserActionListModel;
@protocol CNLSApplicationWorkspace;

@interface CNContactActionsDisambiguationMenuGenerator : NSObject

@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) CNUIUserActionListModel *model;
@property (readonly, nonatomic) CNUIUserActionItem *defaultAction;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, copy, nonatomic) id /* block */ menuItemForActionItem;

+ (id)titleMenuItemWithLabel:(id)a0;
+ (id)adjustTabOfAttributedString:(id)a0 withTabOffset:(double)a1;
+ (double)maxWidthOfMenuItemList:(id)a0;
+ (double)widthOfSpace;
+ (id)paragraphStyleWithTabOffset:(double)a0;
+ (id)labelAttributes;
+ (id)secondaryLabelAttributes;
+ (id)actionTitleAttributes;
+ (id)labelForActionItem:(id)a0 usingApplicationWorkspace:(id)a1 capitalize:(BOOL)a2;
+ (id)unlocalizedLabelFromActionItem:(id)a0;
+ (id)capitalizedDisplayLabelFromLabel:(id)a0;
+ (id)trademarkLabelByLowercaseTrademarkLabel;
+ (id)TTYPostfixedLabelFromLabel:(id)a0 forActionItem:(id)a1;
+ (id)TTYPostfixFormatStringForActionItem:(id)a0;
+ (id)menuItemLabelWithActionLabel:(id)a0 secondaryLabel:(id)a1;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 model:(id)a1 actionType:(id)a2 applicationWorkspace:(id)a3;
- (id)makeMenu;
- (id)titleMenuItem;
- (id)menuItemsForActions;
- (id)menuItemsForDirectoryServiceActions;
- (id)menuItemsForFoundOnDeviceActions;
- (id)menuItemForActionItem:(id)a0;
- (void)markTheDefaultItem:(id)a0;
- (void)adjustTabStopForMaximumWidth:(id)a0;

@end
