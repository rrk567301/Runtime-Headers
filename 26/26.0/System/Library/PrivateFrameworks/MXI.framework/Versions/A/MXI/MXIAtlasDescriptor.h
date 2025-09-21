@class MXIComponentsDescriptorArray;

@interface MXIAtlasDescriptor : NSObject

@property (nonatomic) long long compression;
@property (nonatomic) unsigned int downsample;
@property (nonatomic) long long transferFunction;
@property (retain, nonatomic) MXIComponentsDescriptorArray *components;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOption:(id)a0;

@end
