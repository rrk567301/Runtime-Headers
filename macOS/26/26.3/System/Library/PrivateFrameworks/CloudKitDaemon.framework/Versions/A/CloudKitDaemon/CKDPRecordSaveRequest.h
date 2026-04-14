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

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (id)dictionaryRepresentation;
- (void)addFieldsToDeleteIfExistOnMerge:(id)a0;
- (id)description;
- (unsigned long long)conflictLosersToResolvesCount;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)saveSemanticsAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (int)StringAsSaveSemantics:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addConflictLosersToResolve:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)a0;
- (void)clearConflictLosersToResolves;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)a0;

@end
