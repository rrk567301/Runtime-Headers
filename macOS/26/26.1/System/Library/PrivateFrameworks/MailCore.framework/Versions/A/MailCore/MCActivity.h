@class NSProgress;
@protocol MCActivityDelegate;

@interface MCActivity : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL isFinished;
@property (weak, nonatomic) id<MCActivityDelegate> delegate;
@property (nonatomic) long long qualityOfService;

- (void)end;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)begin;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
