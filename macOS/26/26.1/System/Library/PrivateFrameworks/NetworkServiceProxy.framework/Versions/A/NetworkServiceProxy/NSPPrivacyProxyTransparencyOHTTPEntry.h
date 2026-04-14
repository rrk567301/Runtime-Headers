@class NSData, NSMutableArray;

@interface NSPPrivacyProxyTransparencyOHTTPEntry : PBCodable <NSCopying>

@property (nonatomic) unsigned long long configurationDeliveryStart;
@property (nonatomic) unsigned long long configurationDeliveryEnd;
@property (retain, nonatomic) NSMutableArray *targetInformations;
@property (retain, nonatomic) NSData *keyConfiguration;

+ (Class)targetInformationType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTargetInformation:(id)a0;
- (void)clearTargetInformations;
- (id)targetInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)targetInformationsCount;

@end
