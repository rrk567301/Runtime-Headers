@class NSString, WFREPBAlert;

@interface WFREPBAlertRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *associatedRunRequestIdentifier;
@property (retain, nonatomic) WFREPBAlert *alert;

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
