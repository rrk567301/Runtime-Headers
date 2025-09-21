@class NSString, CLPlacemark, INDateComponentsRange;

@interface INTrainTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *provider;
@property (readonly, copy) NSString *trainName;
@property (readonly, copy) NSString *trainNumber;
@property (readonly, copy) INDateComponentsRange *tripDuration;
@property (readonly, copy) CLPlacemark *departureStationLocation;
@property (readonly, copy) NSString *departurePlatform;
@property (readonly, copy) CLPlacemark *arrivalStationLocation;
@property (readonly, copy) NSString *arrivalPlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithProvider:(id)a0 trainName:(id)a1 trainNumber:(id)a2 tripDuration:(id)a3 departureStationLocation:(id)a4 departurePlatform:(id)a5 arrivalStationLocation:(id)a6 arrivalPlatform:(id)a7;

@end
