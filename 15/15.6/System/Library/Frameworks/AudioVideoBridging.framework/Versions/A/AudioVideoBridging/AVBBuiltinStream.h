@interface AVBBuiltinStream : NSObject

@property unsigned short descriptorIndex;
@property char connected;
@property long long streamingWaitCount;
@property long long streamingWaitPending;

@end
