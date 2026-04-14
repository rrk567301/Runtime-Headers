@class NSString;

@interface WFREPBAlertButton : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) int style;
@property (nonatomic) BOOL preferred;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsStyle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)styleAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
