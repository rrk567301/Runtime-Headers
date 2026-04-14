@interface GTReplayRaytraceRequest : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) unsigned long long streamRef;
@property (copy, nonatomic) id /* block */ streamHandler;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
