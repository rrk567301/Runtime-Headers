@class NSData, HDCodableSyncIdentity;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _modificationDates;
    struct { unsigned char objectType : 1; unsigned char userOrdered : 1; } _has;
}

@property (nonatomic) char hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) char hasUserOrdered;
@property (nonatomic) char userOrdered;
@property (readonly, nonatomic) char hasSourceUUIDs;
@property (retain, nonatomic) NSData *sourceUUIDs;
@property (readonly, nonatomic) unsigned long long modificationDatesCount;
@property (readonly, nonatomic) double *modificationDates;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (void)dealloc;
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
- (void)addModificationDates:(double)a0;
- (void)clearModificationDates;
- (long long)decodedDataTypeCode;
- (double)modificationDatesAtIndex:(unsigned long long)a0;
- (void)setModificationDates:(double *)a0 count:(unsigned long long)a1;

@end
