@class NSString;

@interface HDCodableMedicalCoding : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasCodingSystem;
@property (retain, nonatomic) NSString *codingSystem;
@property (readonly, nonatomic) char hasCodingVersion;
@property (retain, nonatomic) NSString *codingVersion;
@property (readonly, nonatomic) char hasCode;
@property (retain, nonatomic) NSString *code;
@property (readonly, nonatomic) char hasDisplayString;
@property (retain, nonatomic) NSString *displayString;

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
