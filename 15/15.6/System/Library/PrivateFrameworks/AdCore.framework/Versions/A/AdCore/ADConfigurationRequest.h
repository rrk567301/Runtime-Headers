@class NSData, NSMutableArray;

@interface ADConfigurationRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *currentConfigurations;
@property (readonly, nonatomic) char hasIAdID;
@property (retain, nonatomic) NSData *iAdID;

+ (id)options;
+ (Class)currentConfigurationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCurrentConfiguration:(id)a0;
- (void)clearCurrentConfigurations;
- (id)currentConfigurationAtIndex:(unsigned long long)a0;
- (unsigned long long)currentConfigurationsCount;

@end
