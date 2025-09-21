@class NSArray, NSMutableArray;

@interface DisruptiveUISuppressionManager : NSObject {
    NSMutableArray *_requestQueue;
}

@property (nonatomic, getter=isShowingSheet) char showingSheet;
@property (nonatomic, getter=shouldSuppress) char suppress;
@property (nonatomic) char didConsumeFreebie;
@property (readonly, nonatomic) NSArray *requestQueue;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)enqueueRequest:(id)a0;
- (void)clearQueue;
- (id)dequeueRequest;

@end
