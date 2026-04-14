@protocol PXTungstenSettings;

@interface PXTungstenSettings : NSObject

@property (class, nonatomic, readonly) id<PXTungstenSettings> sharedInstance;
@property (class, nonatomic) BOOL wantsPerspectiveDebug;
@property (class, nonatomic) double perspectiveAngle;

- (id)init;

@end
