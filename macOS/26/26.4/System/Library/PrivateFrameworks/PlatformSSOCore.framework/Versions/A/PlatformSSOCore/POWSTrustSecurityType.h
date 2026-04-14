@class NSString, POWSTrustTimestampType, POWSTrustUsernameTokenType;

@interface POWSTrustSecurityType : POWSTrustBaseRequestType

@property (copy, nonatomic) NSString *mustUnderstand;
@property (retain, nonatomic) POWSTrustUsernameTokenType *UsernameToken;
@property (retain, nonatomic) POWSTrustTimestampType *Timestamp;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end
