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

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addDeltaIdentifiers:(id)a0;
- (void)addDeltas:(id)a0;
- (void)clearDeltaIdentifiers;
- (void)clearDeltas;
- (id)deltaIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)deltaIdentifiersCount;
- (id)deltasAtIndex:(unsigned long long)a0;
- (unsigned long long)deltasCount;

@end
