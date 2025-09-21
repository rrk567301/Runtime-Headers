@class NSString;

@interface GTReplayFetchMLGraphData : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) unsigned long long pipelineRef;
@property (retain, nonatomic) NSString *mlModuleKey;
@property (retain, nonatomic) NSString *mlResourceKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
