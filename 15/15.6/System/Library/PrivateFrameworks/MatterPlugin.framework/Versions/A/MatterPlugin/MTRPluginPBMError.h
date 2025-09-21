@class NSError, NSString;

@interface MTRPluginPBMError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (nonatomic) char hasCode;
@property (nonatomic) unsigned long long code;
@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
