@class NUChannelFormat;

@interface NUChannelElementFormat : NUChannelFormat

@property (readonly, nonatomic) NUChannelFormat *representedFormat;

- (id)debugDescription;
- (long long)channelType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)canSpecializeFormat:(id)a0;
- (id)initWithRepresentedFormat:(id)a0;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)isGeneric;
- (id)specializedWithFormat:(id)a0;
- (id)subchannelFormatForKey:(id)a0;
- (id)subchannelKeys;

@end
