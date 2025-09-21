@class NSURL, NSString, PBUnknownFields;

@interface GEOURLInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    unsigned int _alternativeMultipathTCPPort;
    char _supportsMultipathTCP;
    char _useAuthProxy;
    struct { unsigned char has_alternativeMultipathTCPPort : 1; unsigned char has_supportsMultipathTCP : 1; unsigned char has_useAuthProxy : 1; } _flags;
}

@property (readonly, nonatomic) NSURL *nsURL;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) char hasUseAuthProxy;
@property (nonatomic) char useAuthProxy;
@property (nonatomic) char hasSupportsMultipathTCP;
@property (nonatomic) char supportsMultipathTCP;
@property (nonatomic) char hasAlternativeMultipathTCPPort;
@property (nonatomic) unsigned int alternativeMultipathTCPPort;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
