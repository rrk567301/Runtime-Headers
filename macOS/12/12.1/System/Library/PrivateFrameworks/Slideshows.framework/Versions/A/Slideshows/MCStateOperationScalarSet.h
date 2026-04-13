@interface MCStateOperationScalarSet : MCStateOperation

@property (nonatomic) double scalar;

+ (id)stateOperationForTargetPlugObjectID:(id)a0 withStateKey:(id)a1 andScalar:(double)a2;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)_copySelfToSnapshot:(id)a0;

@end
