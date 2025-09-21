@protocol MREmulatedGameControllerDelegate;

@interface MREmulatedGameController : NSObject

@property (readonly, nonatomic) int profile;
@property (nonatomic) double buttonAUpDelay;
@property (weak, nonatomic) id<MREmulatedGameControllerDelegate> delegate;

- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;
- (void)sendGameControllerEvent:(id)a0;

@end
