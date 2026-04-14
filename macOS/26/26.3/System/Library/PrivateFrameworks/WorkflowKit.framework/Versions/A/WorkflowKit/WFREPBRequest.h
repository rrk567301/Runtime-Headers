@class NSString, NSData;

@interface WFREPBRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int version;
@property (retain, nonatomic) NSData *message;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
