@class NSData, _SFPBLatLng, NSString;

@interface _SFPBBeginMapsRoutingCommand : PBCodable <_SFPBBeginMapsRoutingCommand, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _SFPBLatLng *location;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) char shouldSearchDirectionsAlongCurrentRoute;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int directionsMode;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
