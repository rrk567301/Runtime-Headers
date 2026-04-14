@class SMSessionManagerState;

@interface SMSessionStateSyncMessage : SMMessage

@property (readonly, nonatomic) SMSessionManagerState *sessionManagerState;
@property (readonly, nonatomic) unsigned long long stateTransitionType;

+ (unsigned long long)messageType;
+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionManagerState:(id)a0 stateTransitionType:(unsigned long long)a1;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionManagerState:(id)a2 stateTransitionType:(unsigned long long)a3;

@end
