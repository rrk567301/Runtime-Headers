@class NSData, NSNumber;

@interface MTROtaSoftwareUpdateProviderClusterApplyUpdateRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *updateToken;
@property (copy, nonatomic, getter=getNewVersion) NSNumber *newVersion;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
