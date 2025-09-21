@class NSString, NSArray, NSDate, NSMutableArray, PBUnknownFields;
@protocol GEOTransitIconDataSource;

@interface MSPTransitStorageIncident : PBCodable <GEOTransitIncident, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char muid : 1; unsigned char creationDatetime : 1; unsigned char endDatetime : 1; unsigned char iconType : 1; unsigned char lastUpdatedDatetime : 1; unsigned char startDatetime : 1; unsigned char blockingIncident : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) NSString *messageForNonRoutable;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) int iconType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic, getter=isBlockingIncident) char blockingIncident;
@property (readonly, nonatomic) NSArray *affectedEntities;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> artworkDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasSummary;
@property (retain, nonatomic) NSString *summary;
@property (readonly, nonatomic) char hasFullDescription;
@property (retain, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) char hasMessageForRoutePlanning;
@property (retain, nonatomic) NSString *messageForRoutePlanning;
@property (readonly, nonatomic) char hasMessageForRouteStepping;
@property (retain, nonatomic) NSString *messageForRouteStepping;
@property (readonly, nonatomic) char hasMessageForNonRoutable;
@property (retain, nonatomic) NSString *messageForNonRoutable;
@property (nonatomic) char hasStartDatetime;
@property (nonatomic) unsigned int startDatetime;
@property (nonatomic) char hasEndDatetime;
@property (nonatomic) unsigned int endDatetime;
@property (nonatomic) char hasIconType;
@property (nonatomic) int iconType;
@property (nonatomic) char hasCreationDatetime;
@property (nonatomic) unsigned int creationDatetime;
@property (nonatomic) char hasLastUpdatedDatetime;
@property (nonatomic) unsigned int lastUpdatedDatetime;
@property (nonatomic) char hasBlockingIncident;
@property (nonatomic) char blockingIncident;
@property (retain, nonatomic) NSMutableArray *affectedEntities;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)affectedEntitiesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithIncident:(id)a0;
- (int)StringAsIconType:(id)a0;
- (void)addAffectedEntities:(id)a0;
- (id)affectedEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)affectedEntitiesCount;
- (void)clearAffectedEntities;
- (id)iconTypeAsString:(int)a0;

@end
