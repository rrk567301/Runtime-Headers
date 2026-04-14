@class NSUUID;

@interface SMSessionStateUpdateReqMessage : SMMessage

@property (readonly, nonatomic) NSUUID *deviceToRequest;

+ (unsigned long long)messageType;
+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 deviceToRequest:(id)a3;
- (id)outputToDictionary;
- (id)initSessionID:(id)a0 deviceToRequest:(id)a1;

@end
