@class CKDPRecordSaveRequestConflictLoserUpdate, NSString, CKDPRecordSaveRequestShareIdUpdate, CKDPRequestedFields, NSMutableArray, CKDPRecord;

@interface CKDPRecordSaveRequest : PBRequest <NSCopying> {
    struct { unsigned char saveSemantics : 1; unsigned char merge : 1; } _has;
}

@property (readonly, nonatomic) char hasRecord;
@property (retain, nonatomic) CKDPRecord *record;
@property (nonatomic) char hasMerge;
@property (nonatomic) char merge;
@property (retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) char hasConflictLoserUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate;
@property (nonatomic) char hasSaveSemantics;
@property (nonatomic) int saveSemantics;
@property (readonly, nonatomic) char hasZoneProtectionInfoTag;
@property (retain, nonatomic) NSString *zoneProtectionInfoTag;
@property (readonly, nonatomic) char hasRecordProtectionInfoTag;
@property (retain, nonatomic) NSString *recordProtectionInfoTag;
@property (retain, nonatomic) NSMutableArray *conflictLosersToResolves;
@property (readonly, nonatomic) char hasShareEtag;
@property (retain, nonatomic) NSString *shareEtag;
@property (readonly, nonatomic) char hasShareIDUpdate;
@property (retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate;
@property (readonly, nonatomic) char hasParentChainProtectionInfoTag;
@property (retain, nonatomic) NSString *parentChainProtectionInfoTag;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;

+ (id)options;
+ (Class)conflictLosersToResolveType;
+ (Class)fieldsToDeleteIfExistOnMergeType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)StringAsSaveSemantics:(id)a0;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)a0;
- (void)addConflictLosersToResolve:(id)a0;
- (void)addFieldsToDeleteIfExistOnMerge:(id)a0;
- (void)clearConflictLosersToResolves;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (unsigned long long)conflictLosersToResolvesCount;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (id)saveSemanticsAsString:(int)a0;

@end
