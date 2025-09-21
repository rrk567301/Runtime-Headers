@class NSString, WFREPBError;

@interface WFREPBAlertRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) char hasSelectedButton;
@property (retain, nonatomic) NSString *selectedButton;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) WFREPBError *error;

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
