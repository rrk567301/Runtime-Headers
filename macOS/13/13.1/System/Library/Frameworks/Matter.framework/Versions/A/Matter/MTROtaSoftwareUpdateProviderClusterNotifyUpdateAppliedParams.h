@class NSData, NSNumber;

@interface MTROtaSoftwareUpdateProviderClusterNotifyUpdateAppliedParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
