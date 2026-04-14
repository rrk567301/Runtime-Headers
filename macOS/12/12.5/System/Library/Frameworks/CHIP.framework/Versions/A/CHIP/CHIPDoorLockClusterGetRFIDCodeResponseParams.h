@class NSNumber, NSData;

@interface CHIPDoorLockClusterGetRFIDCodeResponseParams : NSObject

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *userStatus;
@property (retain, nonatomic) NSNumber *userType;
@property (retain, nonatomic) NSData *rfidCode;

- (id)init;
- (void).cxx_destruct;

@end
