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

- (void)clearIncludeds;
- (id)excludedAtIndex:(unsigned long long)a0;
- (unsigned long long)dispositionsCount;
- (id)dispositionsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)includedAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)preapprovalsCount;
- (unsigned long long)positivelyExcludedsCount;
- (unsigned long long)excludedsCount;
- (void)copyTo:(id)a0;
- (unsigned long long)includedsCount;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)addPreapprovals:(id)a0;
- (void)addExcluded:(id)a0;
- (void)clearPreapprovals;
- (void)clearDispositions;
- (id)description;
- (id)positivelyExcludedAtIndex:(unsigned long long)a0;
- (void)clearExcludeds;
- (void)mergeFrom:(id)a0;
- (void)addPositivelyExcluded:(id)a0;
- (id)preapprovalsAtIndex:(unsigned long long)a0;
- (void)clearPositivelyExcludeds;
- (void)addIncluded:(id)a0;
- (id)dictionaryRepresentation;
- (void)addDispositions:(id)a0;

@end
