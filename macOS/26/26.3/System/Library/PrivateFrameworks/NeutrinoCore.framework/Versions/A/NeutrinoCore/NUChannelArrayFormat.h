@class NUChannelFormat;

@interface NUChannelArrayFormat : NUChannelFormat

@property (readonly, nonatomic) NUChannelFormat *itemFormat;

- (id)debugDescription;
- (long long)channelType;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
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
