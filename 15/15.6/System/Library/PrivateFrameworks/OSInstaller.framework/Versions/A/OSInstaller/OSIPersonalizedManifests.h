@class NSURL;

@interface OSIPersonalizedManifests : NSObject

@property (readonly) NSURL *recoveryBootManifestsURL;

- (id)init;
- (char)_dittoFrom:(id)a0 to:(id)a1;
- (id)_personalizedManifestsURL;
- (char)_sanityCheckPersonalizedManifests:(id)a0;
- (char)installBootManifestsToURL:(id)a0;
- (char)installFirmwareUpdateManifestsToURL:(id)a0;

@end
