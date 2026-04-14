@class NSString;

@interface SHCatalog : NSObject

@property (readonly, copy) NSString *_installationID;
@property (readonly) double minimumQuerySignatureDuration;
@property (readonly) double maximumQuerySignatureDuration;

+ (BOOL)_validateInstallationID:(id)a0;

- (void).cxx_destruct;
- (id)_initWithInstallationID:(id)a0;
- (void)_preload;
- (id)_createMatcher;

@end
