@class NSURL;

@interface TMSparsebundle : TMDiskImage

@property (readonly, copy) NSURL *sparsebundleURL;

- (BOOL)attachFileMode:(long long)a0 autoMount:(BOOL)a1 error:(id *)a2;
- (id)encryptionUUID:(id *)a0;
- (id)initWithSparsebundleURL:(id)a0;

@end
