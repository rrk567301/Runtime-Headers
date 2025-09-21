@class NSProgress;
@protocol MCActivityDelegate;

@interface MCActivity : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL isFinished;
@property (weak, nonatomic) id<MCActivityDelegate> delegate;
@property (nonatomic) long long qualityOfService;

- (void)begin;
- (void)end;
- (void)dealloc;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (id)init;
- (void).cxx_destruct;

@end
