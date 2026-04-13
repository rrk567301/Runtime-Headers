@class USOSerializedGraph;

@interface SIRINLUEntityCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *entity;
@property double score;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 score:(double)a1;

@end
