@class NSArray, NSURL, OSPDevice, NSData;

@interface OSPSecureBootVerifier : NSObject

@property (retain) NSURL *url;
@property (retain) OSPDevice *device;
@property (retain) NSData *payloadData;
@property (retain) NSArray *validTags;
@property unsigned long long policy;

+ (id)allTags;
+ (id)bootloaderTags;
+ (id)kernelCacheTags;

- (void).cxx_destruct;
- (BOOL)verify;
- (id)initWithBootFileURL:(id)a0 device:(id)a1;
- (BOOL)_verifyManifest:(id)a0 withTag:(unsigned int)a1;

@end
