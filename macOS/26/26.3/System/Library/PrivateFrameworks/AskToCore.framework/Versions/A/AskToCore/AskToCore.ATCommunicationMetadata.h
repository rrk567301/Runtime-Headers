@interface AskToCore.ATCommunicationMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ personInformation;
    void /* unknown type, empty encoding */ actions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
