@class NSString;

@interface ATXMagicalMomentsPBMMTriggeredTracker : PBCodable <NSCopying> {
    struct { unsigned char anchor : 1; } _has;
}

@property (nonatomic) char hasAnchor;
@property (nonatomic) int anchor;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsAnchor:(id)a0;
- (id)anchorAsString:(int)a0;

@end
