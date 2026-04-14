@class NSData;

@interface Sage.SamplingParametersXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _parameters;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_parameters;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
