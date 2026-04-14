@class NSArray, NSMutableArray;

@interface DisruptiveUISuppressionManager : NSObject {
    NSMutableArray *_requestQueue;
}

@property (nonatomic, getter=isShowingSheet) BOOL showingSheet;
@property (nonatomic, getter=shouldSuppress) BOOL suppress;
@property (nonatomic) BOOL didConsumeFreebie;
@property (readonly, nonatomic) NSArray *requestQueue;

- (void)enqueueRequest:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)clearQueue;
- (id)dequeueRequest;

@end
