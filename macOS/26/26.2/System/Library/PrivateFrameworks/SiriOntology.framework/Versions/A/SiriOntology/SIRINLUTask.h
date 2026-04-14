@class USOSerializedGraph;

@interface SIRINLUTask : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *task;
@property (nonatomic) double score;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTask:(id)a0 score:(double)a1;

@end
