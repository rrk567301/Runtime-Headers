@interface FBSceneMonitorBehaviors : NSObject <NSCopying>

@property (nonatomic) char monitorsClientSettings;
@property (nonatomic) char monitorsSettings;
@property (nonatomic) char monitorsPairingStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;

@end
