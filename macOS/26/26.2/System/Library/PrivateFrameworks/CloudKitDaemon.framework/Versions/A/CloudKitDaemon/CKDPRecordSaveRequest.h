@class CKDPRecordSaveRequestConflictLoserUpdate, NSString, CKDPRecordSaveRequestShareIdUpdate, CKDPRequestedFields, NSMutableArray, CKDPRecord;

@interface CKDPRecordSaveRequest : PBRequest <NSCopying> {
    struct { unsigned char saveSemantics : 1; unsigned char merge : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecord;
@property (retain, nonatomic) CKDPRecord *record;
@property (nonatomic) BOOL hasMerge;
@property (nonatomic) BOOL merge;
@property (retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasConflictLoserUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate;
@property (nonatomic) BOOL hasSaveSemantics;
@property (nonatomic) int saveSemantics;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfoTag;
@property (retain, nonatomic) NSString *recordProtectionInfoTag;
@property (retain, nonatomic) NSMutableArray *conflictLosersToResolves;
@property (readonly, nonatomic) BOOL hasShareEtag;
@property (retain, nonatomic) NSString *shareEtag;
@property (readonly, nonatomic) BOOL hasShareIDUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate;
@property (readonly, nonatomic) BOOL hasParentChainProtectionInfoTag;
@property (retain, nonatomic) NSString *parentChainProtectionInfoTag;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;

+ (Class)fieldsToDeleteIfExistOnMergeType;
+ (Class)conflictLosersToResolveType;
+ (id)options;

- (void)clearConflictLosersToResolves;
- (void)writeTo:(id)a0;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFieldsToDeleteIfExistOnMerge:(id)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (id)saveSemanticsAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)addConflictLosersToResolve:(id)a0;
- (int)StringAsSaveSemantics:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)conflictLosersToResolvesCount;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)a0;
- (unsigned int)requestTypeCode;

@end
