@class NSString, NSData;

@interface BMPBSiriPrivateLearningSELFEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) char hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) char hasEventData;
@property (retain, nonatomic) NSData *eventData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
