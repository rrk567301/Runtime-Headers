@class NSString, NSDictionary, NSData, NSUUID, NSNumber, AKPushMessage;

@interface AKCircleRequestPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKPushMessage *responseMessage;
@property (retain, nonatomic) NSDictionary *responseInfo;
@property (nonatomic) unsigned long long circleStep;
@property (nonatomic) unsigned long long piggybackingContext;
@property (nonatomic, getter=isURLResponse) BOOL URLResponse;
@property (retain, nonatomic) NSString *serverInfo;
@property (retain, nonatomic) NSData *clientInfo;
@property (nonatomic) long long clientErrorCode;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *transactionId;
@property (nonatomic) BOOL supportsPresence;
@property (retain, nonatomic) NSUUID *presenceSID;
@property (nonatomic) long long presenceMode;
@property (nonatomic) BOOL presenceFallbackApproved;
@property (copy, nonatomic) NSNumber *presenceCheckPassed;
@property (copy, nonatomic) NSNumber *localPresenceFound;

+ (id)_dictionaryWithPlistData:(id)a0;
+ (id)payloadWithMessage:(id)a0;
+ (id)payloadWithResponseData:(id)a0 forCircleStep:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAcceptingPayload;
- (BOOL)isRequestingPayload;
- (id)replyPayload;

@end
