@class NSData;

@interface Sage.SamplingParametersXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _parameters;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_parameters;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
