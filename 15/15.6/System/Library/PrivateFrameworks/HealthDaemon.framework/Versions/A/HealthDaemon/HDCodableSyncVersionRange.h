@interface HDCodableSyncVersionRange : PBCodable <NSCopying> {
    struct { unsigned char current : 1; unsigned char minimum : 1; } _has;
}

@property (nonatomic) char hasMinimum;
@property (nonatomic) int minimum;
@property (nonatomic) char hasCurrent;
@property (nonatomic) int current;

+ (id)versionRangeWithSyncVersionRange:(struct { int x0; int x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (struct { int x0; int x1; })syncVersionRange;

@end
