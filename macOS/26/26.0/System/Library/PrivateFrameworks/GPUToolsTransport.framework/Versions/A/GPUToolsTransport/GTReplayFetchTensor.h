@interface GTReplayFetchTensor : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) struct GTMTLTensorSlice { struct GTMTLTensorExtents { unsigned long long rank; unsigned long long extents[16]; } origin; struct GTMTLTensorExtents { unsigned long long rank; unsigned long long extents[16]; } dimensions; } slice;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
