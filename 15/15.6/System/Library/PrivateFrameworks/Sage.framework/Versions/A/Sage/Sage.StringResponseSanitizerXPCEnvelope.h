@class NSData;

@interface Sage.StringResponseSanitizerXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _sanitizer;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, copy) NSData *_sanitizer;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
