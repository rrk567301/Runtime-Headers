@class NUChannelFormat;

@interface NUChannelElementFormat : NUChannelFormat

@property (readonly, nonatomic) NUChannelFormat *representedFormat;

- (long long)channelType;
- (id)debugDescription;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)canSpecializeFormat:(id)a0;
- (id)initWithRepresentedFormat:(id)a0;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)isGeneric;
- (id)specializedWithFormat:(id)a0;
- (id)subchannelFormatForKey:(id)a0;
- (id)subchannelKeys;

@end
