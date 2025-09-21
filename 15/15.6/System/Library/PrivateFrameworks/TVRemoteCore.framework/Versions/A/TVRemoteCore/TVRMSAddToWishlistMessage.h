@interface TVRMSAddToWishlistMessage : PBCodable <NSCopying> {
    struct { unsigned char databaseID : 1; unsigned char itemID : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) char hasItemID;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) char hasDatabaseID;
@property (nonatomic) unsigned long long databaseID;
@property (nonatomic) char hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
