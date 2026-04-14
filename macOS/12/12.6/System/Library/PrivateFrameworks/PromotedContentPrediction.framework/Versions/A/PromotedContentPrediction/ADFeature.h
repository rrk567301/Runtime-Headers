@class NSString, NSMutableArray;

@interface ADFeature : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _doubleValues;
}

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) unsigned long long doubleValuesCount;
@property (readonly, nonatomic) double *doubleValues;
@property (retain, nonatomic) NSMutableArray *stringValues;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;

+ (Class)stringValueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)stringValuesCount;
- (void)clearStringValues;
- (double)doubleValueAtIndex:(unsigned long long)a0;
- (void)addStringValue:(id)a0;
- (void)clearDoubleValues;
- (void)addDoubleValue:(double)a0;
- (id)stringValueAtIndex:(unsigned long long)a0;
- (void)setDoubleValues:(double *)a0 count:(unsigned long long)a1;

@end
