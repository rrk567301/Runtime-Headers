@class SMSessionManagerState;

@interface SMSessionStateSyncMessage : SMMessage

@property (readonly, nonatomic) SMSessionManagerState *sessionManagerState;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithSessionManagerState:(id)a0;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionManagerState:(id)a2;

@end
