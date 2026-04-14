@class NSData;

@interface NPKProtoPassSyncStateChangeProcessed : PBCodable <NSCopying> {
    struct { unsigned char changeAccepted : 1; unsigned char fullPassRequired : 1; } _has;
}

@property (retain, nonatomic) NSData *acceptedChangeUUID;
@property (nonatomic) BOOL hasChangeAccepted;
@property (nonatomic) BOOL changeAccepted;
@property (nonatomic) BOOL hasFullPassRequired;
@property (nonatomic) BOOL fullPassRequired;

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

@end
