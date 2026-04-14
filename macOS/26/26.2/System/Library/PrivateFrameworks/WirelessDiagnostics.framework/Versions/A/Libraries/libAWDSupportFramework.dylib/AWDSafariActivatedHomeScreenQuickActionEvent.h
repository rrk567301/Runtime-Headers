@interface AWDSafariActivatedHomeScreenQuickActionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char quickAction : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasQuickAction;
@property (nonatomic) int quickAction;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsQuickAction:(id)a0;
- (id)quickActionAsString:(int)a0;

@end
