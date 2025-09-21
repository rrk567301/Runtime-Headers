@class NSArray, CNUIUserActionItem;

@interface CNUIUserActionListModel : NSObject

@property (retain, nonatomic) CNUIUserActionItem *defaultAction;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *directoryServiceActions;
@property (copy, nonatomic) NSArray *foundOnDeviceActions;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char hasDefaultApp;

+ (id)emptyModel;

- (id)description;
- (void).cxx_destruct;
- (id)allActions;
- (id)initWithDefaultAction:(id)a0 actions:(id)a1 directoryServiceActions:(id)a2 foundOnDeviceActions:(id)a3 hasDefaultApp:(char)a4;
- (id)initWithModel:(id)a0 actions:(id)a1;

@end
