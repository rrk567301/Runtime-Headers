@class NUModel;

@interface NUChannelControlFormat : NUChannelFormat

@property (readonly, nonatomic) NUModel *dataModel;
@property (readonly, nonatomic) long long controlType;

+ (id)controlFormatForRect;
+ (id)controlFormatWithSchema:(id)a0;
+ (id)controlFormatWithSetting:(id)a0;

- (id)debugDescription;
- (long long)expressionType;
- (long long)channelType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)isArray;
- (id)arrayItemFormat;
- (id)elementChannel;
- (id)initWithControlType:(long long)a0 dataModel:(id)a1;
- (BOOL)isCompatibleWithChannelFormat:(id)a0;
- (BOOL)isEqualToChannelFormat:(id)a0;
- (BOOL)requiresSubchannelDataForKey:(id)a0;
- (id)subchannelFormatForKey:(id)a0;
- (id)subchannelKeys;
- (BOOL)validateChannelData:(id)a0 error:(out id *)a1;

@end
