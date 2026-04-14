@class NSNumber;

@interface MTRPushAVStreamTransportClusterSupportedFormatStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *containerFormat;
@property (copy, nonatomic) NSNumber *ingestMethod;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
