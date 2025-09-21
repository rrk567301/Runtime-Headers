@class NSString, NSData, WFREPBError;

@interface WFREPBDialogRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *originatingRequestIdentifier;
@property (readonly, nonatomic) BOOL hasDialogRequestResponseData;
@property (retain, nonatomic) NSData *dialogRequestResponseData;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) WFREPBError *error;

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
