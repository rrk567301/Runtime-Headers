@class NSArray, BMStoreEvent;

@interface ATXPOICategoryEnterAndExitEvents : NSObject

@property (readonly, nonatomic) NSArray *categoryEnterEvents;
@property (readonly, nonatomic) BMStoreEvent *exitEvent;

- (id)initWithCategoryEvents:(id)a0 exitEvent:(id)a1;
- (id)visitEventAllowingMissingExit:(BOOL)a0;
- (id)visitEvent;
- (void).cxx_destruct;

@end
