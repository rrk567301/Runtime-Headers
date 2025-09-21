@class NSString, NSArray, NSData, NSDictionary, NSMutableArray;

@interface CRPreflightResponse : NSObject

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSMutableArray *componentChallenges;
@property (retain, nonatomic) NSMutableArray *activationChallenges;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSArray *details;
@property (retain, nonatomic) NSString *errorCode;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSString *specVersion;
@property (retain, nonatomic) NSData *signatureChallenge;
@property (retain, nonatomic) NSString *kbbECID;
@property (retain, nonatomic) NSString *kbbSIK;
@property (retain, nonatomic) NSDictionary *rawResponse;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
