@class NSString, _SFPBWeatherDetails, _SFPBSportsDetail, NSData, _SFPBFlightDetails;

@interface _SFPBTopic : PBCodable <_SFPBTopic, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *query;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) _SFPBFlightDetails *flight;
@property (retain, nonatomic) _SFPBWeatherDetails *weather;
@property (retain, nonatomic) _SFPBSportsDetail *sports;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSFTopic:(id)a0;

@end
