@interface SiriKitRuntime.ServerBoundContextUpdateContainer : NSObject <AFContextSnapshot, NSSecureCoding> {
    void /* unknown type, empty encoding */ contextUpdate;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)serializedBackingStore;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
