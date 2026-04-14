@class NSString, NSData;

@interface WFREPBRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int version;
@property (retain, nonatomic) NSData *message;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
