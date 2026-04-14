@class NSString;

@interface SHCatalog : NSObject

@property (readonly, copy) NSString *_installationID;
@property (readonly) double minimumQuerySignatureDuration;
@property (readonly) double maximumQuerySignatureDuration;

+ (BOOL)_validateInstallationID:(id)a0;

- (void).cxx_destruct;
- (double)_bufferDuration;
- (id)_initWithInstallationID:(id)a0;
- (id)_createMatcher;

@end
