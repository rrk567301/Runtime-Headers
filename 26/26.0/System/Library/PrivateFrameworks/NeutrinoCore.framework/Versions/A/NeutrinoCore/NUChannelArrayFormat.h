@class NUChannelFormat;

@interface NUChannelArrayFormat : NUChannelFormat

@property (readonly, nonatomic) NUChannelFormat *itemFormat;

- (long long)channelType;
- (id)debugDescription;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isArray;
- (id)arrayItemFormat;
- (BOOL)canSpecializeFormat:(id)a0;
- (id)elementChannel;
- (id)initWithItemFormat:(id)a0;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)isGeneric;
- (id)specializedWithFormat:(id)a0;

@end
