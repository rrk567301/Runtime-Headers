@interface GTCaptureQueryConfiguration : GTCaptureRequest <NSSecureCoding> {
    unsigned long long _requestID;
}

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)requestID;

@end
