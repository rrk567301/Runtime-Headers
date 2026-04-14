@class MXIComponentsDescriptorArray;

@interface MXIAtlasDescriptor : NSObject

@property (nonatomic) long long compression;
@property (nonatomic) unsigned int downsample;
@property (nonatomic) long long transferFunction;
@property (retain, nonatomic) MXIComponentsDescriptorArray *components;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOption:(id)a0;

@end
