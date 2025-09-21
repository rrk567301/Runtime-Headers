@class NSData, HDCodableSyncIdentity;

@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _modificationDates;
    struct { unsigned char objectType : 1; unsigned char userOrdered : 1; } _has;
}

@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) BOOL hasUserOrdered;
@property (nonatomic) BOOL userOrdered;
@property (readonly, nonatomic) BOOL hasSourceUUIDs;
@property (retain, nonatomic) NSData *sourceUUIDs;
@property (readonly, nonatomic) unsigned long long modificationDatesCount;
@property (readonly, nonatomic) double *modificationDates;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addModificationDates:(double)a0;
- (void)clearModificationDates;
- (long long)decodedDataTypeCode;
- (double)modificationDatesAtIndex:(unsigned long long)a0;
- (void)setModificationDates:(double *)a0 count:(unsigned long long)a1;

@end
