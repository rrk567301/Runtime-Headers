@class NSString, SMSessionConfiguration;

@interface SMSessionModifyConfigRemoteControlMessage : SMMessage

@property (readonly, nonatomic) NSString *sourceDeviceID;
@property (readonly, nonatomic) long long sourceDeviceType;
@property (readonly, nonatomic) SMSessionConfiguration *updatedSessionConfiguration;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceDeviceType:(long long)a0 sourceDeviceID:(id)a1 updatedSessionConfiguration:(id)a2;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 sourceDeviceType:(long long)a3 sourceDeviceID:(id)a4 updatedSessionConfiguration:(id)a5;

@end
