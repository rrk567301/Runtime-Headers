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
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)functionDescriptor;

- (void)setPipelineOptions:(unsigned long long)a0;
- (id)privateFunctions;
- (id)specializedName;
- (void)setPluginData:(id)a0;
- (void)setPrivateFunctions:(id)a0;
- (id)pluginData;
- (unsigned long long)pipelineOptions;
- (void)setConstantValues:(id)a0;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (struct { unsigned char x0[32]; })hashStableWithFunction:(id)a0;
- (id)init;
- (id)name;
- (id)constantValues;
- (void)setSpecializedName:(id)a0;
- (unsigned long long)options;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setApplyFunctionConstants:(BOOL)a0;
- (void)setOptions:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)applyFunctionConstants;
- (void)setName:(id)a0;

@end
