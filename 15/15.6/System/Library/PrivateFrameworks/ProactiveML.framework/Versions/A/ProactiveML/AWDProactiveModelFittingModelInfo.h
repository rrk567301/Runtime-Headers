@class NSString;

@interface AWDProactiveModelFittingModelInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;

+ (id)modelInfoFromSessionDescriptor:(id)a0;
+ (id)modelInfoFromPlanId:(id)a0;

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
