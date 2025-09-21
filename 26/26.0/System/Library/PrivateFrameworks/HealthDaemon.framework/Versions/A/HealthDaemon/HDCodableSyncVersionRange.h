@interface HDCodableSyncVersionRange : PBCodable <NSCopying> {
    struct { unsigned char current : 1; unsigned char minimum : 1; } _has;
}

@property (nonatomic) BOOL hasMinimum;
@property (nonatomic) int minimum;
@property (nonatomic) BOOL hasCurrent;
@property (nonatomic) int current;

+ (id)versionRangeWithSyncVersionRange:(struct { int x0; int x1; })a0;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct { int x0; int x1; })syncVersionRange;

@end
