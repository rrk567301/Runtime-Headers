@interface CoreIDVShared.APDURequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ messageName;
    void /* unknown type, empty encoding */ messageId;
    void /* unknown type, empty encoding */ data;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
