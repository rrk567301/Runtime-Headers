@class NSSet;
@protocol MRGroupSessionHandoffCoordinatorDelegate;

@interface MRGroupSessionHandoffCoordinator : NSObject

@property (readonly, nonatomic) NSSet *handoffSuppressedDevices;
@property (weak, nonatomic) id<MRGroupSessionHandoffCoordinatorDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
