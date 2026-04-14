@interface VNCVMLObservation_LegacySupportDoNotChange : NSObject <NSSecureCoding> {
    float _confidence;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0 forKey:(id)a1;

@end
