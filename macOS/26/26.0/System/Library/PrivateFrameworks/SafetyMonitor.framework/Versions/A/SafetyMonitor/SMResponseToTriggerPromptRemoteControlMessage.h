@class NSString;

@interface SMResponseToTriggerPromptRemoteControlMessage : SMMessage

@property (readonly, nonatomic) long long response;
@property (readonly, nonatomic) NSString *sourceDeviceID;
@property (readonly, nonatomic) long long sourceDeviceType;

+ (unsigned long long)messageType;
+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTriggerPromptResponse:(long long)a0 sessionID:(id)a1 sourceDeviceType:(long long)a2 sourceDeviceID:(id)a3;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 response:(long long)a2 sessionID:(id)a3 sourceDeviceType:(long long)a4 sourceDeviceID:(id)a5;

@end
