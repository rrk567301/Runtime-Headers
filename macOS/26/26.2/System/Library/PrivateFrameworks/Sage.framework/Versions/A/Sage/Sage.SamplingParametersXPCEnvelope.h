@class NSData;

@interface Sage.SamplingParametersXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _parameters;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_parameters;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
