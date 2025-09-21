@class NSString;

@interface PPPBLabeledSocialProfile : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasUrlString;
@property (retain, nonatomic) NSString *urlString;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL hasUserIdentifier;
@property (retain, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
