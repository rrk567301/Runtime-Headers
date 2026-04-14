@interface SIRINLURepetitionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int asrHypothesisIndex;
@property unsigned int repetitionType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAsrHypothesisIndex:(unsigned int)a0 repetitionType:(unsigned int)a1;

@end
