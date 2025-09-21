@class NSMutableArray;

@interface CNUIContactCardCustomActionGroup : NSObject

@property (retain, nonatomic) NSMutableArray *customActions;

- (void).cxx_destruct;
- (void)addCustomAction:(id)a0;
- (id)initWithCustomActions:(id)a0;
- (void)removeCustomAction:(id)a0;

@end
