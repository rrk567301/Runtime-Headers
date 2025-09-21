@class NSSet, NSString, PBUnknownFields;

@interface MSPTransitStorageIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _nextStopsMuids;
    struct { unsigned char muid : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) char hasNextStopIDs;
@property (readonly, nonatomic) NSSet *nextStopIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) unsigned long long nextStopsMuidsCount;
@property (readonly, nonatomic) unsigned long long *nextStopsMuids;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNextStopsMuids:(unsigned long long)a0;
- (void)clearNextStopsMuids;
- (id)initWithIncidentEntity:(id)a0;
- (unsigned long long)nextStopsMuidsAtIndex:(unsigned long long)a0;
- (void)setNextStopsMuids:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
