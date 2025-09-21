@class NSURL;

@interface DiskImageGraphNodeNative : DiskImageGraphNode

@property (retain, nonatomic) NSURL *filePath;

+ (char)validateWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)URL;
- (id)toDictionary;
- (char)deleteImage;
- (id)initWithDictionary:(id)a0 updateChangesToDict:(char)a1 workDir:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 tag:(id)a1 UUID:(id)a2 parentNode:(id)a3 metadata:(id)a4 isCache:(char)a5;
- (id)toDIShadowNode;
- (char)validateAppendedImageWithInfo:(id)a0 error:(id *)a1;

@end
