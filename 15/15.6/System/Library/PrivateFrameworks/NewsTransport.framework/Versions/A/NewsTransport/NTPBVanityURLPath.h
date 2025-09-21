@class NSString;

@interface NTPBVanityURLPath : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sourcePath;
@property (retain, nonatomic) NSString *destinationPath;
@property (readonly, nonatomic) char hasDestinationParameters;
@property (retain, nonatomic) NSString *destinationParameters;

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
