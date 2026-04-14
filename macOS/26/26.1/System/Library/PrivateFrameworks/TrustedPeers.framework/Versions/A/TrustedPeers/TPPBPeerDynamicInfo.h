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

- (unsigned long long)excludedsCount;
- (id)preapprovalsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)dispositionsAtIndex:(unsigned long long)a0;
- (id)includedAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)positivelyExcludedAtIndex:(unsigned long long)a0;
- (void)addIncluded:(id)a0;
- (void)addExcluded:(id)a0;
- (unsigned long long)positivelyExcludedsCount;
- (void)addPreapprovals:(id)a0;
- (id)description;
- (unsigned long long)preapprovalsCount;
- (void)addPositivelyExcluded:(id)a0;
- (unsigned long long)dispositionsCount;
- (void)clearExcludeds;
- (void)clearPositivelyExcludeds;
- (unsigned long long)includedsCount;
- (id)excludedAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addDispositions:(id)a0;
- (void)clearIncludeds;
- (void)clearPreapprovals;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearDispositions;
- (void)writeTo:(id)a0;

@end
