@class NSString, HDCodableEntityIdentifier;

@interface HDCodableNanoSyncAnchor : PBCodable <HDNanoSyncDescription, NSCopying> {
    struct { unsigned char anchor : 1; unsigned char objectType : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasObjectType;
@property (nonatomic) int objectType;
@property (nonatomic) char hasAnchor;
@property (nonatomic) long long anchor;
@property (readonly, nonatomic) char hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsObjectType:(id)a0;
- (id)objectTypeAsString:(int)a0;
- (id)nanoSyncDescription;

@end
