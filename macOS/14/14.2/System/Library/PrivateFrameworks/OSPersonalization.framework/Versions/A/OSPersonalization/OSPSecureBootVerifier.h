@class NSArray, NSURL, OSPDevice, NSData;

@interface OSPSecureBootVerifier : NSObject

@property (retain) NSURL *url;
@property (retain) OSPDevice *device;
@property (retain) NSData *payloadData;
@property (retain) NSArray *validTags;
@property unsigned long long policy;

+ (id)allTags;
+ (id)kernelCacheTags;
+ (id)bootloaderTags;

- (void).cxx_destruct;
- (BOOL)verify;
- (BOOL)_verifyManifest:(id)a0 withTag:(unsigned int)a1;
- (id)initWithBootFileURL:(id)a0 device:(id)a1;

@end
