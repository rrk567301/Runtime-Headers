@class NSData;

@interface LAEnvironmentMechanismBiometry : LAEnvironmentMechanism

@property (nonatomic) long long approvalState;
@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) char isEnrolled;
@property (readonly, nonatomic) char isLockedOut;
@property (readonly, nonatomic) NSData *stateHash;
@property (readonly, nonatomic) char builtInSensorInaccessible;

- (id)initWithCoreMechanism:(id)a0;
- (id)unsaltedStateHash;

@end
