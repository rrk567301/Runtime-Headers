@class NSString, NTPBDate;

@interface NTPBAudioPlaylistItem : PBCodable <NSCopying> {
    struct { unsigned char listOrder : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) char hasDateAdded;
@property (retain, nonatomic) NTPBDate *dateAdded;
@property (nonatomic) char hasListOrder;
@property (nonatomic) long long listOrder;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
