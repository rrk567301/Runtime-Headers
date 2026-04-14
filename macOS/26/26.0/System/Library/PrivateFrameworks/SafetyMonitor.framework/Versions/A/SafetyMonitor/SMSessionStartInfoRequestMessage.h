@interface SMSessionStartInfoRequestMessage : SMMessage

+ (unsigned long long)messageType;
+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2;

@end
