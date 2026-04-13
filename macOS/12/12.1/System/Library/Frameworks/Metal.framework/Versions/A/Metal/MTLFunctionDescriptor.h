@class NSString, NSArray, MTLFunctionConstantValues, NSDictionary;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {
    struct MTLFunctionDescriptorPrivate { NSString *name; NSString *specializedName; unsigned long long options; MTLFunctionConstantValues *constantValues; NSArray *binaryArchives; BOOL applyFunctionConstants; } _private;
    unsigned long long _pipelineOptions;
    NSDictionary *_pluginData;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *specializedName;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *binaryArchives;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)functionDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)name;
- (void)setName:(id)a0;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)a0;
- (void)setApplyFunctionConstants:(BOOL)a0;
- (void)setConstantValues:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)pluginData;
- (void)setPluginData:(id)a0;
- (unsigned long long)pipelineOptions;
- (void)setPipelineOptions:(unsigned long long)a0;
- (id)constantValues;
- (struct { unsigned char x0[32]; })hashStableWithFunction:(id)a0;
- (void)setSpecializedName:(id)a0;
- (id)specializedName;
- (BOOL)applyFunctionConstants;

@end
