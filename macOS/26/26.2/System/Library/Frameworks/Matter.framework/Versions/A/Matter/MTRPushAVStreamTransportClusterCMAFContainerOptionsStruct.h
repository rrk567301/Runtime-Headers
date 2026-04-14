@class NSNumber, NSString, NSData;

@interface MTRPushAVStreamTransportClusterCMAFContainerOptionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cmafInterface;
@property (copy, nonatomic) NSNumber *segmentDuration;
@property (copy, nonatomic) NSNumber *chunkDuration;
@property (copy, nonatomic) NSNumber *sessionGroup;
@property (copy, nonatomic) NSString *trackName;
@property (copy, nonatomic) NSData *cencKey;
@property (copy, nonatomic) NSData *cencKeyID;
@property (copy, nonatomic) NSNumber *metadataEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
