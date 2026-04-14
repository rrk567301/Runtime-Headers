@class NSNumber, NSData;

@interface CHIPDoorLockClusterGetPINCodeResponseParams : NSObject

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *userStatus;
@property (retain, nonatomic) NSNumber *userType;
@property (retain, nonatomic) NSData *pin;

- (id)init;
- (void).cxx_destruct;

@end
