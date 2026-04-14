@interface AWAttentionLostEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double attentionLostTimeout;
@property (readonly, nonatomic) id associatedObject;

- (void)updateWithConfig:(id)a0;
- (id)description;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 attentionLostTimeout:(double)a2;
- (void)validateMask;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
