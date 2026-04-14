@class NSArray;

@interface MPAVRoutingControllerSelection : NSObject

@property (retain, nonatomic) NSArray *routes;
@property (nonatomic) long long selectionOperation;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRoutes:(id)a0 selectionOperation:(long long)a1;

@end
