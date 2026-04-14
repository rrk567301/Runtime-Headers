@class NSString;

@interface NTPBVanityURLPath : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sourcePath;
@property (retain, nonatomic) NSString *destinationPath;
@property (readonly, nonatomic) BOOL hasDestinationParameters;
@property (retain, nonatomic) NSString *destinationParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
