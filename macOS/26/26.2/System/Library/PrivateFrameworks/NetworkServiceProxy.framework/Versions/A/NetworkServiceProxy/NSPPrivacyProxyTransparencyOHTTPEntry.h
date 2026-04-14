@class NSData, NSMutableArray;

@interface NSPPrivacyProxyTransparencyOHTTPEntry : PBCodable <NSCopying>

@property (nonatomic) unsigned long long configurationDeliveryStart;
@property (nonatomic) unsigned long long configurationDeliveryEnd;
@property (retain, nonatomic) NSMutableArray *targetInformations;
@property (retain, nonatomic) NSData *keyConfiguration;

+ (Class)targetInformationType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTargetInformation:(id)a0;
- (void)clearTargetInformations;
- (id)targetInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)targetInformationsCount;

@end
