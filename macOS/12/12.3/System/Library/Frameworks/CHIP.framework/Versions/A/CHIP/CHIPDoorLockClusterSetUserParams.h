@class NSNumber, NSString;

@interface CHIPDoorLockClusterSetUserParams : NSObject

@property (retain, nonatomic) NSNumber *operationType;
@property (retain, nonatomic) NSNumber *userIndex;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSNumber *userUniqueId;
@property (retain, nonatomic) NSNumber *userStatus;
@property (retain, nonatomic) NSNumber *userType;
@property (retain, nonatomic) NSNumber *credentialRule;

- (id)init;
- (void).cxx_destruct;

@end
