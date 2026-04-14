@class NSString, HDCodableSample;

@interface HDCodableDeletedSample : PBCodable <HKUUIDProvider, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;

- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)hk_UUID;

@end
