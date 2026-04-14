@class NSURL, NSString, NSData;

@interface PFParallaxAssetResource : NSObject

@property (readonly, nonatomic) NSURL *archiveURL;
@property (nonatomic) long long type;
@property (readonly, nonatomic, getter=isProxyOnly) BOOL proxyOnly;
@property (retain, nonatomic) struct CGImage { } *proxyImage;
@property (copy, nonatomic) NSURL *imageFileURL;
@property (copy, nonatomic) NSString *fileType;
@property (nonatomic) unsigned int orientation;
@property (copy, nonatomic) NSString *adjustmentFormat;
@property (copy, nonatomic) NSString *adjustmentVersion;
@property (copy, nonatomic) NSData *adjustmentData;

+ (BOOL)saveImage:(struct CGImage { } *)a0 toURL:(id)a1 error:(id *)a2;
+ (struct CGImage { } *)newImageWithContentsOfURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)saveToArchiveURL:(id)a0 error:(id *)a1;
- (BOOL)loadFromArchiveURL:(id)a0 error:(id *)a1;
- (id)contentsDictionary;
- (BOOL)loadContentsFromDictionary:(id)a0 proxyPath:(id *)a1 imagePath:(id *)a2 adjustmentPath:(id *)a3 error:(id *)a4;

@end
