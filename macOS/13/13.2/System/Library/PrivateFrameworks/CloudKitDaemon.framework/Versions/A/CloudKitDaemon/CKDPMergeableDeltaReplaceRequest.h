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
+ (Class)deltasType;
+ (Class)deltaIdentifiersType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearDeltas;
- (void)addDeltas:(id)a0;
- (unsigned long long)deltasCount;
- (id)deltasAtIndex:(unsigned long long)a0;
- (void)clearDeltaIdentifiers;
- (void)addDeltaIdentifiers:(id)a0;
- (unsigned long long)deltaIdentifiersCount;
- (id)deltaIdentifiersAtIndex:(unsigned long long)a0;

@end
