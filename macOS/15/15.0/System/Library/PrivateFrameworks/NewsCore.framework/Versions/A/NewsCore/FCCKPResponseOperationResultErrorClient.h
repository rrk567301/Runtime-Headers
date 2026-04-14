@class FCCKPOplockFailure, FCCKPUniqueFieldFailure;

@interface FCCKPResponseOperationResultErrorClient : PBCodable <NSCopying> {
    FCCKPOplockFailure *_oplockFailure;
    int _type;
    FCCKPUniqueFieldFailure *_uniqueFieldFailure;
    struct { unsigned char type : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
