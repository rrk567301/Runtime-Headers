@interface GTReplayFetchWireframe : GTReplayRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) char solid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
