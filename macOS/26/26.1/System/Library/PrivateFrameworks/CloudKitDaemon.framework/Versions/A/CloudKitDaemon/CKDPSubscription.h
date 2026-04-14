@class CKDPRecordZoneIdentifier, CKDPSubscriptionNotification, NSMutableArray, CKDPIdentifier;

@interface CKDPSubscription : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _mutationTriggers;
    struct { unsigned char evaluationType : 1; unsigned char owner : 1; unsigned char fireOnce : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier *identifier;
@property (nonatomic) BOOL hasEvaluationType;
@property (nonatomic) int evaluationType;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) int owner;
@property (readonly, nonatomic) unsigned long long mutationTriggersCount;
@property (readonly, nonatomic) int *mutationTriggers;
@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) CKDPSubscriptionNotification *notification;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *recordTypes;
@property (nonatomic) BOOL hasFireOnce;
@property (nonatomic) BOOL fireOnce;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (Class)filtersType;
+ (Class)recordTypesType;

- (void)clearRecordTypes;
- (void)clearMutationTriggers;
- (id)mutationTriggersAsString:(int)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)mutationTriggersAtIndex:(unsigned long long)a0;
- (id)recordTypesAtIndex:(unsigned long long)a0;
- (id)filtersAtIndex:(unsigned long long)a0;
- (void)addFilters:(id)a0;
- (int)StringAsMutationTriggers:(id)a0;
- (void)clearFilters;
- (unsigned long long)recordTypesCount;
- (int)StringAsEvaluationType:(id)a0;
- (unsigned long long)filtersCount;
- (id)description;
- (void)setMutationTriggers:(int *)a0 count:(unsigned long long)a1;
- (id)ownerAsString:(int)a0;
- (void)dealloc;
- (void)addMutationTriggers:(int)a0;
- (void).cxx_destruct;
- (void)addRecordTypes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsOwner:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)evaluationTypeAsString:(int)a0;

@end
