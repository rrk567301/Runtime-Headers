@class NSString, NSDictionary, NSData, NSError;

@interface BYManifestVerifier : NSObject

@property (retain) NSString *manifestPath;
@property (retain) NSString *restoreBundlePath;
@property unsigned long long manifestType;
@property (retain) NSError *error;
@property (retain) NSData *manifestData;
@property const struct _img4_chip { } *chip;
@property struct __AMAuthInstall { } *amai;
@property (retain) NSDictionary *buildIdentity;

- (void)dealloc;
- (void).cxx_destruct;
- (char)verifyWithError:(id *)a0;
- (char)_verify;
- (char)_detectTagForPayload:(id)a0 tag:(unsigned int *)a1;
- (char)_initAMAI;
- (char)_initBuildIdentity;
- (char)_initChip;
- (char)_initManifest;
- (id)_recreatePayloadData:(id)a0 tagOverride:(id)a1 outTag4cc:(unsigned int *)a2;
- (int)_verifyPayload:(id)a0 tag:(unsigned int)a1;
- (char)_verifySourceBootObjectsInBuildIdentity;
- (id)initWithManifest:(id)a0 type:(unsigned long long)a1 restoreBundle:(id)a2;

@end
