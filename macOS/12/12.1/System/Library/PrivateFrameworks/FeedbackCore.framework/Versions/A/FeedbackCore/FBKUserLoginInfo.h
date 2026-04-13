@class NSString, NSNumber, FBKCustomBehavior;

@interface FBKUserLoginInfo : NSObject

@property (retain, nonatomic) NSString *deviceToken;
@property (retain, nonatomic) NSNumber *participantID;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) FBKCustomBehavior *behavior;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)saveDeviceTokenLookupInformation;

@end
