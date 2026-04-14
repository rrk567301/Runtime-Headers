@interface GTCaptureQueryConfiguration : GTCaptureRequest <NSSecureCoding> {
    unsigned long long _requestID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)requestID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
