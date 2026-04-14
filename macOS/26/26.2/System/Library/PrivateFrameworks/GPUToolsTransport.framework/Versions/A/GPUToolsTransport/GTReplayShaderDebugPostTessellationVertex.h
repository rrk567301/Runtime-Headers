@class NSArray;

@interface GTReplayShaderDebugPostTessellationVertex : GTReplayShaderDebugRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *patchIDs;
@property (nonatomic) unsigned int instanceID;
@property (nonatomic) unsigned int amplificationID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
