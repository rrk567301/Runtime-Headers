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
- (BOOL)verifyWithError:(id *)a0;
- (id)initWithManifest:(id)a0 type:(unsigned long long)a1 restoreBundle:(id)a2;
- (BOOL)_verify;
- (BOOL)_initManifest;
- (BOOL)_initChip;
- (BOOL)_initAMAI;
- (BOOL)_initBuildIdentity;
- (BOOL)_verifySourceBootObjectsInBuildIdentity;
- (id)_recreatePayloadData:(id)a0 tagOverride:(id)a1 outTag4cc:(unsigned int *)a2;
- (BOOL)_detectTagForPayload:(id)a0 tag:(unsigned int *)a1;
- (int)_verifyPayload:(id)a0 tag:(unsigned int)a1;

@end
