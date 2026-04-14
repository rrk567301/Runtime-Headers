@class NSURL, NSDictionary, NSArray;

@interface NDAnalyticsPayloadInfo : NSObject <NDAnalyticsPayloadInfo>

@property (copy, nonatomic) NSURL *endpointURL;
@property (copy, nonatomic) NSDictionary *valuesByHTTPHeaderField;
@property (copy, nonatomic) NSArray *entriesToUpload;
@property (copy, nonatomic) NSDictionary *droppedEntriesByReason;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
