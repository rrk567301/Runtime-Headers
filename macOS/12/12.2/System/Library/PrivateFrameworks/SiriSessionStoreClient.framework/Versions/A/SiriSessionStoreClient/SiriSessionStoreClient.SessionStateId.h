@interface SiriSessionStoreClient.SessionStateId : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ assistantId;
    void /* unknown type, empty encoding */ deviceId;
    void /* unknown type, empty encoding */ userId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
