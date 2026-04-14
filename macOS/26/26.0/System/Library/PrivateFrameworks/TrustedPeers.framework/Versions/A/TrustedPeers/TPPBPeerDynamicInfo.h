@class NSMutableArray;

@interface TPPBPeerDynamicInfo : PBCodable <NSCopying> {
    struct { unsigned char clock : 1; } _has;
}

@property (nonatomic) BOOL hasClock;
@property (nonatomic) unsigned long long clock;
@property (retain, nonatomic) NSMutableArray *includeds;
@property (retain, nonatomic) NSMutableArray *excludeds;
@property (retain, nonatomic) NSMutableArray *dispositions;
@property (retain, nonatomic) NSMutableArray *preapprovals;
@property (retain, nonatomic) NSMutableArray *positivelyExcludeds;

+ (Class)dispositionsType;
+ (Class)excludedType;
+ (Class)includedType;
+ (Class)positivelyExcludedType;
+ (Class)preapprovalsType;

- (void)addPositivelyExcluded:(id)a0;
- (void)clearDispositions;
- (void)clearExcludeds;
- (void)copyTo:(id)a0;
- (void)clearPositivelyExcludeds;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)includedsCount;
- (void)addExcluded:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDispositions:(id)a0;
- (id)includedAtIndex:(unsigned long long)a0;
- (void)addPreapprovals:(id)a0;
- (id)preapprovalsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)excludedsCount;
- (void)addIncluded:(id)a0;
- (void)clearPreapprovals;
- (id)positivelyExcludedAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)preapprovalsCount;
- (void)clearIncludeds;
- (unsigned long long)positivelyExcludedsCount;
- (unsigned long long)dispositionsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)dispositionsAtIndex:(unsigned long long)a0;
- (id)excludedAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
