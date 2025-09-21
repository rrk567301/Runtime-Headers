@class NSString;

@interface BMPBReadMessageEvent : PBCodable <NSCopying> {
    struct { unsigned char markedUnread : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (nonatomic) BOOL hasMarkedUnread;
@property (nonatomic) BOOL markedUnread;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
