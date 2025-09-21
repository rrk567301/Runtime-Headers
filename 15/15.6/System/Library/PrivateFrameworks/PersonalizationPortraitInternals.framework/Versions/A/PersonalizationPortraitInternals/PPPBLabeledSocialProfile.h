@class NSString;

@interface PPPBLabeledSocialProfile : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) char hasUrlString;
@property (retain, nonatomic) NSString *urlString;
@property (readonly, nonatomic) char hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) char hasUserIdentifier;
@property (retain, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) char hasService;
@property (retain, nonatomic) NSString *service;

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
