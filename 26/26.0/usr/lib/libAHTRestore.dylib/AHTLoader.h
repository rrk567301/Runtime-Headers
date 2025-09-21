@class NSString;

@interface AHTLoader : NSObject

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connect;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int imageTag;
@property (readonly, nonatomic) unsigned int loadingGroup;

+ (id)allDevices;
+ (id)withService:(unsigned int)a0;
+ (id)bootloaderPropertiesForImageTag:(unsigned int)a0;
+ (BOOL)errorFromAfuKextResult:(int)a0 error:(id *)a1;
+ (BOOL)errorFromKernel:(int)a0 error:(id *)a1;
+ (id)registryPropertiesForService:(unsigned int)a0;
+ (id)withName:(id)a0;

- (id)fullDescription;
- (id)initWithService:(unsigned int)a0;
- (void)dealloc;
- (id)description;
- (void)close;
- (void).cxx_destruct;
- (BOOL)open:(id *)a0;
- (BOOL)loadImage:(id)a0 payloadOnly:(BOOL)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)overrideFDR:(id)a0 fdrClass:(id)a1 fdrSubclass:(id)a2 error:(id *)a3;
- (BOOL)overrideNextLoadOptions:(unsigned long long)a0 error:(id *)a1;

@end
