@class NSData, NSNumber;

@interface CHIPOtaSoftwareUpdateProviderClusterApplyUpdateRequestParams : NSObject

@property (retain, nonatomic) NSData *updateToken;
@property (retain, nonatomic, getter=getNewVersion) NSNumber *newVersion;

- (id)init;
- (void).cxx_destruct;

@end
