@class NSString;

@interface WFREPBAlertButton : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) int style;
@property (nonatomic) BOOL preferred;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)styleAsString:(int)a0;
- (int)StringAsStyle:(id)a0;

@end
