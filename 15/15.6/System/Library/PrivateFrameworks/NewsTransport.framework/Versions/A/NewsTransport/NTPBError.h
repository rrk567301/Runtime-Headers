@class NSString;

@interface NTPBError : PBCodable <NSCopying>

@property (nonatomic) int errorCode;
@property (readonly, nonatomic) char hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
