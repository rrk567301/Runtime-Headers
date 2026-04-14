@protocol MTLTexture, MTLSharedEvent;

@interface GTReplayFetchInto : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (retain, nonatomic) id<MTLTexture> dest;
@property (retain, nonatomic) id<MTLSharedEvent> event;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)decodeXPCOnlyObjects:(id)a0;
- (void)encodeXPCOnlyObjects:(id)a0;

@end
