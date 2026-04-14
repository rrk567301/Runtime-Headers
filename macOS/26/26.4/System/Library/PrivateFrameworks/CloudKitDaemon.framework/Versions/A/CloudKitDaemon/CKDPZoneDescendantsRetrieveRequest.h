@class NSData, CKDPRecordZoneIdentifier;

@interface CKDPZoneDescendantsRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char limit : 1; unsigned char traversalType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) BOOL hasTraversalType;
@property (nonatomic) int traversalType;
@property (readonly, nonatomic) BOOL hasContinuationToken;
@property (retain, nonatomic) NSData *continuationToken;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) unsigned int limit;

+ (id)options;

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
- (int)StringAsTraversalType:(id)a0;
- (id)traversalTypeAsString:(int)a0;

@end
