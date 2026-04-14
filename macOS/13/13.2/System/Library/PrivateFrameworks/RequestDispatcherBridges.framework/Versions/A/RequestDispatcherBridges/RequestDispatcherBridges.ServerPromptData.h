@interface RequestDispatcherBridges.ServerPromptData : NSObject <AFContextSnapshot, NSSecureCoding> {
    void /* unknown type, empty encoding */ legacyNLContext;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serializedBackingStore;
- (id)initWithSerializedBackingStore:(id)a0;

@end
