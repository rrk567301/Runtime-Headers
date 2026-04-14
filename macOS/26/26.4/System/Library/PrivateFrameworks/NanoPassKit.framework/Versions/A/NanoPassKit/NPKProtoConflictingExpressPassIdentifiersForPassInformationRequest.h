@class NSData, NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasExpressPassInformation;
@property (retain, nonatomic) NSData *expressPassInformation;
@property (retain, nonatomic) NSMutableArray *referenceExpressPassesInformations;
@property (readonly, nonatomic) BOOL hasExpressPassConfiguration;
@property (retain, nonatomic) NSData *expressPassConfiguration;
@property (retain, nonatomic) NSMutableArray *referenceExpressPassConfigurations;

+ (Class)referenceExpressPassConfigurationsType;
+ (Class)referenceExpressPassesInformationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addReferenceExpressPassConfigurations:(id)a0;
- (void)addReferenceExpressPassesInformation:(id)a0;
- (void)clearReferenceExpressPassConfigurations;
- (void)clearReferenceExpressPassesInformations;
- (id)referenceExpressPassConfigurationsAtIndex:(unsigned long long)a0;
- (unsigned long long)referenceExpressPassConfigurationsCount;
- (id)referenceExpressPassesInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)referenceExpressPassesInformationsCount;

@end
