@class NSArray, NSData, NSString;

@interface VISOperatingPointsCollection : PBCodable <VISOperatingPointsCollection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *points;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)clearPoints;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)pointsCount;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addPoints:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)pointsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
