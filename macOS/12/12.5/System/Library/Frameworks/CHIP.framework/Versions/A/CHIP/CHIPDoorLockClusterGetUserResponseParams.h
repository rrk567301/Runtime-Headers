@class NSNumber, NSString, NSArray;

@interface CHIPDoorLockClusterGetUserResponseParams : NSObject

@property (retain, nonatomic) NSNumber *userIndex;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSNumber *userUniqueId;
@property (retain, nonatomic) NSNumber *userStatus;
@property (retain, nonatomic) NSNumber *userType;
@property (retain, nonatomic) NSNumber *credentialRule;
@property (retain, nonatomic) NSArray *credentials;
@property (retain, nonatomic) NSNumber *creatorFabricIndex;
@property (retain, nonatomic) NSNumber *lastModifiedFabricIndex;
@property (retain, nonatomic) NSNumber *nextUserIndex;

- (id)init;
- (void).cxx_destruct;

@end
