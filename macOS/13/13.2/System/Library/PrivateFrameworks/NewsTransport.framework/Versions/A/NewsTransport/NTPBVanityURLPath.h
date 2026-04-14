@class NSString;

@interface NTPBVanityURLPath : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sourcePath;
@property (retain, nonatomic) NSString *destinationPath;
@property (readonly, nonatomic) BOOL hasDestinationParameters;
@property (retain, nonatomic) NSString *destinationParameters;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
