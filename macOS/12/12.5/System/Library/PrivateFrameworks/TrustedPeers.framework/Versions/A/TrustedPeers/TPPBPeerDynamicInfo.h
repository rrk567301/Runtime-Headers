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

+ (Class)includedType;
+ (Class)excludedType;
+ (Class)dispositionsType;
+ (Class)preapprovalsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addIncluded:(id)a0;
- (void)addExcluded:(id)a0;
- (void)addDispositions:(id)a0;
- (void)addPreapprovals:(id)a0;
- (unsigned long long)includedsCount;
- (void)clearIncludeds;
- (id)includedAtIndex:(unsigned long long)a0;
- (unsigned long long)excludedsCount;
- (void)clearExcludeds;
- (id)excludedAtIndex:(unsigned long long)a0;
- (unsigned long long)dispositionsCount;
- (void)clearDispositions;
- (id)dispositionsAtIndex:(unsigned long long)a0;
- (unsigned long long)preapprovalsCount;
- (void)clearPreapprovals;
- (id)preapprovalsAtIndex:(unsigned long long)a0;

@end
