@class NSString, NSDictionary, NSData, SFLatLng, SFTopic, SFCommandReference;

@interface SFBeginMapsRoutingCommand : SFCommand <SFBeginMapsRoutingCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char shouldSearchDirectionsAlongCurrentRoute : 1; unsigned char directionsMode : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SFLatLng *location;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) char shouldSearchDirectionsAlongCurrentRoute;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int directionsMode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (retain, nonatomic) SFCommandReference *commandReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasDirectionsMode;
- (char)hasShouldSearchDirectionsAlongCurrentRoute;

@end
