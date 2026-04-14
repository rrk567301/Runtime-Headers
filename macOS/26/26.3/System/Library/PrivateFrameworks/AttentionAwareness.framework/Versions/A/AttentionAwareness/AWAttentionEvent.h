@interface AWAttentionEvent : NSObject <NSSecureCoding> {
    unsigned long long _tagIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long eventMask;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) id tag;

- (void)updateWithConfig:(id)a0;
- (unsigned long long)tagIndex;
- (id)description;
- (void)validateMask;
- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 eventMask:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
