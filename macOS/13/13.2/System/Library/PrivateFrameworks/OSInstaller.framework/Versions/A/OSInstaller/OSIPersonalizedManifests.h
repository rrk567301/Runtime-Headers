@class NSURL;

@interface OSIPersonalizedManifests : NSObject

@property (readonly) NSURL *recoveryBootManifestsURL;

- (id)init;
- (BOOL)installBootManifestsToURL:(id)a0;
- (BOOL)installFirmwareUpdateManifestsToURL:(id)a0;
- (id)_personalizedManifestsURL;
- (BOOL)_dittoFrom:(id)a0 to:(id)a1;
- (BOOL)_sanityCheckPersonalizedManifests:(id)a0;

@end
