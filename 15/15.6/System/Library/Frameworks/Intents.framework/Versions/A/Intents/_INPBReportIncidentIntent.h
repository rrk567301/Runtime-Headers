@class _INPBLocation, NSString, _INPBSupportedTrafficIncidentType, _INPBIntentMetadata, _INPBString;

@interface _INPBReportIncidentIntent : PBCodable <_INPBReportIncidentIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char isClear : 1; unsigned char startTime : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *additionalDetails;
@property (readonly, nonatomic) char hasAdditionalDetails;
@property (retain, nonatomic) _INPBSupportedTrafficIncidentType *incidentType;
@property (readonly, nonatomic) char hasIncidentType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) char isClear;
@property (nonatomic) char hasIsClear;
@property (nonatomic) double startTime;
@property (nonatomic) char hasStartTime;
@property (retain, nonatomic) _INPBLocation *userLocation;
@property (readonly, nonatomic) char hasUserLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
