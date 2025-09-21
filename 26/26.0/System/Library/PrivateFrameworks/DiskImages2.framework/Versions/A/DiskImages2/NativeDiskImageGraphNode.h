@class NSURL;

@interface NativeDiskImageGraphNode : DiskImageGraphNode

@property (readonly, nonatomic) NSURL *filePath;

+ (BOOL)validateWithDictionary:(id)a0 error:(id *)a1;

- (id)URL;
- (void)setFilePath:(id)a0;
- (id)toDictionary;
- (void).cxx_destruct;
- (BOOL)deleteImage;
- (id)initWithDictionary:(id)a0 workDir:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 tag:(id)a1 UUID:(id)a2 parentNode:(id)a3 metadata:(id)a4 isCache:(BOOL)a5;
- (id)toDIShadowNode;
- (BOOL)validateAppendedImageWithInfo:(id)a0 error:(id *)a1;

@end
