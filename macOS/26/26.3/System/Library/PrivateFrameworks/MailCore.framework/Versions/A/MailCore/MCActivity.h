@class NSProgress;
@protocol MCActivityDelegate;

@interface MCActivity : NSObject

@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL isFinished;
@property (weak, nonatomic) id<MCActivityDelegate> delegate;
@property (nonatomic) long long qualityOfService;

- (void)begin;
- (void)end;
- (void)cancel;
- (void)suspend;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)dealloc;

@end
