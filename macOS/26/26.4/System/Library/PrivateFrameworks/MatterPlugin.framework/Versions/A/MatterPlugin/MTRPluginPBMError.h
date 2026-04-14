@class NSError, NSString;

@interface MTRPluginPBMError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) unsigned long long code;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;

- (id)initWithError:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
