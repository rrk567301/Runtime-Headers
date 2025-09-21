@class NSString, NTPBRecordBase;

@interface NTPBResourceRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) char hasMimeType;
@property (retain, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) char hasEncoding;
@property (retain, nonatomic) NSString *encoding;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
