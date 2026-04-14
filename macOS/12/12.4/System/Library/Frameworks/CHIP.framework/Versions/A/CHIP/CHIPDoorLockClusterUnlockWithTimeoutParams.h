@class NSNumber, NSData;

@interface CHIPDoorLockClusterUnlockWithTimeoutParams : NSObject

@property (retain, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) NSData *pinCode;

- (id)init;
- (void).cxx_destruct;

@end
