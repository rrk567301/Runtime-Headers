@class NUChannel;

@interface NUChannelFormat : NSObject

@property (readonly, nonatomic) BOOL isArray;
@property (readonly, nonatomic) NUChannelFormat *arrayItemFormat;
@property (readonly, nonatomic) NUChannel *elementChannel;
@property (readonly, nonatomic) BOOL isGeneric;
@property (readonly, nonatomic) long long channelType;

- (long long)expressionType;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)canSpecializeFormat:(id)a0;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)requiresSubchannelDataForKey:(id)a0;
- (id)specializedWithFormat:(id)a0;
- (id)subchannelFormatAtIndex:(unsigned long long)a0;
- (id)subchannelFormatForKey:(id)a0;
- (id)subchannelKeys;
- (BOOL)validateChannelData:(id)a0 error:(out id *)a1;
- (BOOL)validateChannelExpression:(id)a0 error:(out id *)a1;

@end
