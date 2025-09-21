@class NSString, NSDictionary;

@interface PluginDiskImageGraphNode : DiskImageGraphNode

@property (retain, nonatomic) NSString *pluginName;
@property (retain, nonatomic) NSDictionary *pluginParams;

+ (char)validateWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)URL;
- (id)toDictionary;
- (char)deleteImage;
- (id)initWithDictionary:(id)a0 updateChangesToDict:(char)a1 workDir:(id)a2 error:(id *)a3;
- (id)initWithPluginName:(id)a0 pluginParams:(id)a1 tag:(id)a2 UUID:(id)a3 parentNode:(id)a4 metadata:(id)a5 isCache:(char)a6;
- (char)validateAppendedImageWithInfo:(id)a0 error:(id *)a1;

@end
