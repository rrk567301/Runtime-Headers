@class NSString, NSDictionary;

@interface PluginDiskImageGraphNode : DiskImageGraphNode

@property (readonly, nonatomic) NSString *pluginName;
@property (readonly, nonatomic) NSDictionary *pluginParams;

+ (BOOL)validateWithDictionary:(id)a0 error:(id *)a1;

- (id)URL;
- (id)toDictionary;
- (void).cxx_destruct;
- (BOOL)deleteImage;
- (id)initWithDictionary:(id)a0 workDir:(id)a1 error:(id *)a2;
- (id)initWithPluginName:(id)a0 pluginParams:(id)a1 tag:(id)a2 UUID:(id)a3 parentNode:(id)a4 metadata:(id)a5 isCache:(BOOL)a6;
- (BOOL)validateAppendedImageWithInfo:(id)a0 error:(id *)a1;

@end
