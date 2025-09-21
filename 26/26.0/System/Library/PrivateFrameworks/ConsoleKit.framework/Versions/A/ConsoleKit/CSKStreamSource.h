@protocol CSKStreamSourceDelegate;

@interface CSKStreamSource : NSObject {
    unsigned long long _signpostID;
}

@property (nonatomic) BOOL isStreaming;
@property (weak, nonatomic) id<CSKStreamSourceDelegate> delegate;
@property (nonatomic) unsigned long long total;
@property (nonatomic) unsigned long long failures;

- (void)stop;
- (void)finish;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
- (void)fail;
- (void)_handleActivityEvents:(id)a0 usingTimeZone:(id)a1 fromBackward:(BOOL)a2;
- (void)fetchBackward;
- (void)fetchForward;
- (void)loadMoreWithCompletionHandler:(id /* block */)a0;
- (id)loadRangeValue;

@end
