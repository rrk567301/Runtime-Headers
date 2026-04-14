@class FCCKPIdentifier;

@interface FCCKPUniqueFieldFailure : PBCodable <NSCopying> {
    FCCKPIdentifier *_identifierForConstraintFailure;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
