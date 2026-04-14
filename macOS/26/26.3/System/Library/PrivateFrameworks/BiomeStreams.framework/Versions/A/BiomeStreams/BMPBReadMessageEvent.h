@class NSString;

@interface BMPBReadMessageEvent : PBCodable <NSCopying> {
    struct { unsigned char markedUnread : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (nonatomic) BOOL hasMarkedUnread;
@property (nonatomic) BOOL markedUnread;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
