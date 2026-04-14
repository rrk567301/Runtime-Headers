@class NSData;

@interface Sage.StringResponseSanitizerXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _sanitizer;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_sanitizer;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
