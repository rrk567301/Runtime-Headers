@class NSString, AVPlaybackCoordinator, NSDate;

@interface AVCoordinatedPlaybackSuspension : NSObject {
    AVPlaybackCoordinator *_coordinator;
    struct OpaqueFigTimelineCoordinatorSuspension { } *_figSuspension;
}

@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSDate *beginDate;

- (void)dealloc;
- (void)end;
- (id)initWithCoordinator:(id)a0 reason:(id)a1;
- (struct OpaqueFigTimelineCoordinatorSuspension { } *)_figSuspension;
- (void)endProposingNewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
