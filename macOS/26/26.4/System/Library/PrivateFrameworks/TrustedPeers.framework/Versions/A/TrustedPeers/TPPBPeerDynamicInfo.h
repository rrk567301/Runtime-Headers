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

- (id)dispositionsAtIndex:(unsigned long long)a0;
- (void)clearPreapprovals;
- (void)addDispositions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)positivelyExcludedAtIndex:(unsigned long long)a0;
- (void)addPreapprovals:(id)a0;
- (void)clearExcludeds;
- (unsigned long long)includedsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addIncluded:(id)a0;
- (id)excludedAtIndex:(unsigned long long)a0;
- (id)preapprovalsAtIndex:(unsigned long long)a0;
- (void)clearIncludeds;
- (id)dictionaryRepresentation;
- (unsigned long long)dispositionsCount;
- (void).cxx_destruct;
- (unsigned long long)preapprovalsCount;
- (unsigned long long)excludedsCount;
- (void)addPositivelyExcluded:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addExcluded:(id)a0;
- (void)clearPositivelyExcludeds;
- (id)description;
- (id)includedAtIndex:(unsigned long long)a0;
- (unsigned long long)positivelyExcludedsCount;
- (void)writeTo:(id)a0;
- (void)clearDispositions;

@end
