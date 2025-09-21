@class GEOPBTransitIncidentEntityFilter, NSSet, NSString, PBUnknownFields;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _affectedMuid;
    GEOPBTransitIncidentEntityFilter *_filter;
    struct { unsigned char has_affectedMuid : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) char hasNextStopIDs;
@property (readonly, nonatomic) NSSet *nextStopIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
