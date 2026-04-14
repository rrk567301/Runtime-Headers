@class NSNumber, NSArray, NSData;

@interface MTRGroupcastClusterJoinGroupParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSArray *endpoints;
@property (copy, nonatomic) NSNumber *keyID;
@property (copy, nonatomic) NSData *key;
@property (copy, nonatomic) NSNumber *gracePeriod;
@property (copy, nonatomic) NSNumber *useAuxiliaryACL;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_encodeAsDataValue:(id *)a0;
- (struct ChipError { unsigned int x0; unsigned int x1; char *x2; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x0; void *x1; struct Tag { unsigned long long x0; } x2; unsigned long long x3; struct TLVBackingStore *x4; char *x5; char *x6; unsigned int x7; unsigned int x8; int x9; unsigned short x10; BOOL x11; struct PacketBufferHandle { struct PacketBuffer *x0; } x12; } *)a0;

@end
