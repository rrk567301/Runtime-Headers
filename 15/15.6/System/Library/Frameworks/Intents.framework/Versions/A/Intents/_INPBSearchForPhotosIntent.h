@class _INPBEventList, _INPBDateTimeRange, _INPBLocation, _INPBIntentMetadata, _INPBPlaceList, _INPBGeographicalFeatureList, _INPBString, _INPBActivityList, _INPBStringList, NSString, _INPBContactList;

@interface _INPBSearchForPhotosIntent : PBCodable <_INPBSearchForPhotosIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _excludedAttributes;
    struct { int *list; unsigned long long count; unsigned long long size; } _includedAttributes;
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBActivityList *activities;
@property (readonly, nonatomic) char hasActivities;
@property (retain, nonatomic) _INPBString *albumName;
@property (readonly, nonatomic) char hasAlbumName;
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property (readonly, nonatomic) char hasDateCreated;
@property (retain, nonatomic) _INPBEventList *events;
@property (readonly, nonatomic) char hasEvents;
@property (readonly, nonatomic) int *excludedAttributes;
@property (readonly, nonatomic) unsigned long long excludedAttributesCount;
@property (retain, nonatomic) _INPBGeographicalFeatureList *geographicalFeatures;
@property (readonly, nonatomic) char hasGeographicalFeatures;
@property (readonly, nonatomic) int *includedAttributes;
@property (readonly, nonatomic) unsigned long long includedAttributesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBLocation *locationCreated;
@property (readonly, nonatomic) char hasLocationCreated;
@property (retain, nonatomic) _INPBString *memoryName;
@property (readonly, nonatomic) char hasMemoryName;
@property (retain, nonatomic) _INPBContactList *peopleInPhoto;
@property (readonly, nonatomic) char hasPeopleInPhoto;
@property (retain, nonatomic) _INPBPlaceList *places;
@property (readonly, nonatomic) char hasPlaces;
@property (retain, nonatomic) _INPBStringList *searchTerm;
@property (readonly, nonatomic) char hasSearchTerm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsIncludedAttributes:(id)a0;
- (int)StringAsExcludedAttributes:(id)a0;
- (void)addExcludedAttribute:(int)a0;
- (void)addIncludedAttribute:(int)a0;
- (void)clearExcludedAttributes;
- (void)clearIncludedAttributes;
- (int)excludedAttributeAtIndex:(unsigned long long)a0;
- (id)excludedAttributesAsString:(int)a0;
- (int)includedAttributeAtIndex:(unsigned long long)a0;
- (id)includedAttributesAsString:(int)a0;
- (void)setExcludedAttributes:(int *)a0 count:(unsigned long long)a1;
- (void)setIncludedAttributes:(int *)a0 count:(unsigned long long)a1;

@end
