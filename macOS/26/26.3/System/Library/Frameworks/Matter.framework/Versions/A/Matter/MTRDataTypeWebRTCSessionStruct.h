@class NSNumber;

@interface MTRDataTypeWebRTCSessionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSNumber *peerNodeID;
@property (copy, nonatomic) NSNumber *peerEndpointID;
@property (copy, nonatomic) NSNumber *streamUsage;
@property (copy, nonatomic) NSNumber *videoStreamID;
@property (copy, nonatomic) NSNumber *audioStreamID;
@property (copy, nonatomic) NSNumber *metadataEnabled;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
