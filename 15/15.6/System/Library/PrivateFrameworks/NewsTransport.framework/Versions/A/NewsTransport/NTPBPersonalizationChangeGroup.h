@class NSString, NSMutableArray;

@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying> {
    struct { unsigned char changeNumber : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *deltas;
@property (readonly, nonatomic) char hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) char hasChangeNumber;
@property (nonatomic) unsigned long long changeNumber;

+ (Class)deltasType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDeltas:(id)a0;
- (void)clearDeltas;
- (id)deltasAtIndex:(unsigned long long)a0;
- (unsigned long long)deltasCount;

@end
