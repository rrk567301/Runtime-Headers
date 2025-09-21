@class NSString;

@interface CPLSuggestionPerson : PBCodable <NSCopying> {
    struct { unsigned char feature : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasPersonIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) char hasFeature;
@property (nonatomic) unsigned int feature;
@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) NSString *context;

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
