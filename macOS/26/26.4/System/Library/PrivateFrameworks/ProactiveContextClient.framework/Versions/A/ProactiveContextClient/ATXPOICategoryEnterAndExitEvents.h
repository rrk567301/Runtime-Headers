@class NSArray, BMStoreEvent;

@interface ATXPOICategoryEnterAndExitEvents : NSObject

@property (readonly, nonatomic) NSArray *categoryEnterEvents;
@property (readonly, nonatomic) BMStoreEvent *exitEvent;

- (id)visitEventAllowingMissingExit:(BOOL)a0;
- (id)visitEvent;
- (void).cxx_destruct;
- (id)initWithCategoryEvents:(id)a0 exitEvent:(id)a1;

@end
