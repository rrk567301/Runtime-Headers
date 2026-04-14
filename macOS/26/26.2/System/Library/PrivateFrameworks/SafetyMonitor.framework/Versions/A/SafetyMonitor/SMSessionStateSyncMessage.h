@class SMSessionManagerState;

@interface SMSessionStateSyncMessage : SMMessage

@property (readonly, nonatomic) SMSessionManagerState *sessionManagerState;
@property (readonly, nonatomic) unsigned long long stateTransitionType;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSessionManagerState:(id)a0 stateTransitionType:(unsigned long long)a1;
- (id)outputToDictionary;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionManagerState:(id)a2 stateTransitionType:(unsigned long long)a3;

@end
