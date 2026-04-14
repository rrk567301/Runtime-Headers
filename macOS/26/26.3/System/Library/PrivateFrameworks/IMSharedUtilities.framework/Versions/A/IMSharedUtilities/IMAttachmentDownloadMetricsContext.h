@class NSString, NSNumber;

@interface IMAttachmentDownloadMetricsContext : NSObject

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) unsigned long long limitType;
@property (readonly, nonatomic) NSNumber *limitSize;
@property (readonly, nonatomic) unsigned long long qualityType;
@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, nonatomic) BOOL lqmEnabled;
@property (readonly, nonatomic) BOOL isEncrypted;

- (void).cxx_destruct;
- (void)_setValuesOnMetricsDictionary:(id)a0 withFileSize:(id)a1 sourceType:(id)a2;
- (id)initForServiceName:(id)a0 limitType:(unsigned long long)a1 limitSize:(id)a2 qualityType:(unsigned long long)a3 isSticker:(BOOL)a4 lowQualityModeEnabled:(BOOL)a5 isEncrypted:(BOOL)a6;

@end
