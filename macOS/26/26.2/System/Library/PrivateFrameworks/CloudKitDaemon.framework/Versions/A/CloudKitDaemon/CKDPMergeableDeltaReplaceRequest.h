@class CKDPMergeableValueIdentifier, NSMutableArray;

@interface CKDPMergeableDeltaReplaceRequest : PBRequest <NSCopying> {
    struct { unsigned char containsNewData : 1; unsigned char ignoreMissingDeltas : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier;
@property (retain, nonatomic) NSMutableArray *deltaIdentifiers;
@property (retain, nonatomic) NSMutableArray *deltas;
@property (nonatomic) BOOL hasIgnoreMissingDeltas;
@property (nonatomic) BOOL ignoreMissingDeltas;
@property (nonatomic) BOOL hasContainsNewData;
@property (nonatomic) BOOL containsNewData;

+ (id)options;
+ (Class)deltaIdentifiersType;
+ (Class)deltasType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (void)addDeltaIdentifiers:(id)a0;
- (void)addDeltas:(id)a0;
- (void)clearDeltaIdentifiers;
- (void)clearDeltas;
- (id)deltaIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)deltaIdentifiersCount;
- (id)deltasAtIndex:(unsigned long long)a0;
- (unsigned long long)deltasCount;

@end
