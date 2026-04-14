@interface FIDSNode_FPProvider : FIDSNode <FIDSNodeCoding>

@property (readonly, nonatomic, getter=isUsingFPFS) BOOL useFPFS;
@property (readonly, nonatomic) BOOL isFPv2;

+ (id)makeWithCoder:(id)a0;

- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)longDescription;

@end
