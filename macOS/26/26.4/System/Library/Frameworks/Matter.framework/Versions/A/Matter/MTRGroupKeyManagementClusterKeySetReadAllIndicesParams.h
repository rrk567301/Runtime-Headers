@class NSArray, NSNumber;

@interface MTRGroupKeyManagementClusterKeySetReadAllIndicesParams : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *groupKeySetIDs;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)_encodeAsDataValue:(id *)a0;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x0; void *x1; struct Tag { unsigned long long x0; } x2; unsigned long long x3; struct TLVBackingStore *x4; char *x5; char *x6; unsigned int x7; unsigned int x8; int x9; unsigned short x10; BOOL x11; struct PacketBufferHandle { struct PacketBuffer *x0; } x12; } *)a0;

@end
