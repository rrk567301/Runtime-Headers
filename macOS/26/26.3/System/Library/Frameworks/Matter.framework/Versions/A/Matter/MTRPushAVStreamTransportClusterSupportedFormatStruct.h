@class NSNumber;

@interface MTRPushAVStreamTransportClusterSupportedFormatStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *containerFormat;
@property (copy, nonatomic) NSNumber *ingestMethod;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
