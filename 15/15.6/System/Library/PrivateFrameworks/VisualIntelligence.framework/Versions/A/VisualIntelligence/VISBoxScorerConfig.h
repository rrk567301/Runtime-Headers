@class NSData, NSString;

@interface VISBoxScorerConfig : PBCodable <VISBoxScorerConfig, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int granularity;
@property (nonatomic) double xmean;
@property (nonatomic) double ymean;
@property (nonatomic) double std;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
