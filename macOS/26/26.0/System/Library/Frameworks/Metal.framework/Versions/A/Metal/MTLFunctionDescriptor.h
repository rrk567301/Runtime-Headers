@class NSString, NSArray, MTLFunctionConstantValues, NSDictionary;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {
    struct MTLFunctionDescriptorPrivate { NSString *name; NSString *specializedName; unsigned long long options; MTLFunctionConstantValues *constantValues; NSArray *binaryArchives; BOOL applyFunctionConstants; NSArray *privateFunctions; } _private;
    unsigned long long _pipelineOptions;
    NSDictionary *_pluginData;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *specializedName;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *binaryArchives;

+ (id)alloc;
+ (id)functionDescriptor;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)pipelineOptions;
- (id)pluginData;
- (void)setPluginData:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)options;
- (void)setName:(id)a0;
- (void)setConstantValues:(id)a0;
- (id)privateFunctions;
- (id)constantValues;
- (id)init;
- (id)specializedName;
- (void)setPrivateFunctions:(id)a0;
- (id)description;
- (id)name;
- (void)setApplyFunctionConstants:(BOOL)a0;
- (struct { unsigned char x0[32]; })hashStableWithFunction:(id)a0;
- (BOOL)applyFunctionConstants;
- (void)setSpecializedName:(id)a0;
- (unsigned long long)hash;
- (void)setPipelineOptions:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;

@end
