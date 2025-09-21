@interface NUChannelFormat : NSObject

@property (readonly, nonatomic) long long channelType;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isCompatibleWithChannelFormat:(id)a0;
- (char)isEqualToChannelFormat:(id)a0;
- (id)subchannelFormatAtIndex:(unsigned long long)a0;
- (id)subchannelFormatForKey:(id)a0;
- (char)validateChannelData:(id)a0 error:(out id *)a1;

@end
