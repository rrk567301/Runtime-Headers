@class NSData;

@interface Sage.SamplingParametersXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _parameters;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSData *_parameters;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
