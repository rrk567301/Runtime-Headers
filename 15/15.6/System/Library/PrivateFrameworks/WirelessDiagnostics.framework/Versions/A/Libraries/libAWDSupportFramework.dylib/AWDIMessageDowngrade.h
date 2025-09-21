@class NSString;

@interface AWDIMessageDowngrade : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char durationBeforeDowngrade : 1; unsigned char isManualDowngrade : 1; } _has;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDurationBeforeDowngrade;
@property (nonatomic) unsigned int durationBeforeDowngrade;
@property (nonatomic) char hasIsManualDowngrade;
@property (nonatomic) unsigned int isManualDowngrade;

- (void)dealloc;
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
