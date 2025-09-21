@interface VNCVMLObservation_LegacySupportDoNotChange : NSObject <NSSecureCoding> {
    float _confidence;
}

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 forKey:(id)a1;

@end
