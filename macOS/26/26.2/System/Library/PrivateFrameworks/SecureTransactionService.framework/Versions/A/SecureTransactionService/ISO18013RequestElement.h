@class NSString;

@interface ISO18013RequestElement : NSObject <NSSecureCoding> {
    unsigned short _retentionIntent;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
