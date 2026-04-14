@class NSNumber, NSData;

@interface MTRPushAVStreamTransportClusterCMAFContainerOptionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *chunkDuration;
@property (copy, nonatomic) NSData *cencKey;
@property (copy, nonatomic) NSNumber *metadataEnabled;
@property (copy, nonatomic) NSData *cencKeyID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
