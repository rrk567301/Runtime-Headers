@class NSString, NSArray, NSURL, NSData;

@interface CRPreflightRequest : NSObject

@property (retain, nonatomic) NSURL *server;
@property (retain, nonatomic) NSData *signatureChallenge;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSData *bikCertificate;
@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) NSArray *componentResponses;
@property (retain, nonatomic) NSArray *activationResponses;
@property (retain, nonatomic) NSString *phase;

+ (id)request;

- (id)init;
- (id)payload;
- (id)description;
- (void).cxx_destruct;

@end
