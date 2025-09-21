@class NSString, SGDCKTimeRange, NSData, NSMutableArray, SGDCKInteractionInfo;

@interface SGDCKEvent : PBCodable <NSCopying> {
    struct { unsigned char creationTimestamp : 1; unsigned char lastModifiedTimestamp : 1; unsigned char parentEntityType : 1; unsigned char categoryType : 1; unsigned char allDay : 1; unsigned char cancelled : 1; } _has;
}

@property (readonly, nonatomic) char hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (readonly, nonatomic) char hasSourceKey;
@property (retain, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) char hasContent;
@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char hasCreationTimestamp;
@property (nonatomic) double creationTimestamp;
@property (nonatomic) char hasLastModifiedTimestamp;
@property (nonatomic) double lastModifiedTimestamp;
@property (readonly, nonatomic) char hasWhen;
@property (retain, nonatomic) SGDCKTimeRange *when;
@property (nonatomic) char hasAllDay;
@property (nonatomic) char allDay;
@property (retain, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) char hasExtraKey;
@property (retain, nonatomic) NSString *extraKey;
@property (nonatomic) char hasCancelled;
@property (nonatomic) char cancelled;
@property (readonly, nonatomic) char hasSchemaOrg;
@property (retain, nonatomic) NSData *schemaOrg;
@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) char hasTemplateName;
@property (retain, nonatomic) NSString *templateName;
@property (nonatomic) char hasCategoryType;
@property (nonatomic) int categoryType;
@property (readonly, nonatomic) char hasInteractionInfo;
@property (retain, nonatomic) SGDCKInteractionInfo *interactionInfo;
@property (nonatomic) char hasParentEntityType;
@property (nonatomic) long long parentEntityType;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) NSData *metadata;

+ (Class)locationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocations:(id)a0;
- (void)clearLocations;
- (unsigned long long)locationsCount;
- (int)StringAsCategoryType:(id)a0;
- (id)categoryTypeAsString:(int)a0;
- (id)locationsAtIndex:(unsigned long long)a0;

@end
