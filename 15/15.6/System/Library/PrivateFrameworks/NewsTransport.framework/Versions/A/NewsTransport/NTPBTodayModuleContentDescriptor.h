@class NSString, NTPBTodayModuleContentRequest;

@interface NTPBTodayModuleContentDescriptor : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasRequest;
@property (retain, nonatomic) NTPBTodayModuleContentRequest *request;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
