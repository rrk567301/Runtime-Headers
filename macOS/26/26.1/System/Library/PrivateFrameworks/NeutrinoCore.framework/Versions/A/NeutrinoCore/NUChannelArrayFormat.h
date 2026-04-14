@class NUChannelFormat;

@interface NUChannelArrayFormat : NUChannelFormat

@property (readonly, nonatomic) NUChannelFormat *itemFormat;

- (long long)channelType;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
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
