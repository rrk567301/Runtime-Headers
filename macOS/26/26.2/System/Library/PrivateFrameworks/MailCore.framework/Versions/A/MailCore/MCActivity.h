@class NSProgress;
@protocol MCActivityDelegate;

@interface MCActivity : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL isFinished;
@property (weak, nonatomic) id<MCActivityDelegate> delegate;
@property (nonatomic) long long qualityOfService;

- (void)begin;
- (void)cancel;
- (void)end;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
