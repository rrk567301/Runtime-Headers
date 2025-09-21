@class NSString, NSMutableArray;

@interface ADFeature : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _doubleValues;
}

@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) unsigned long long doubleValuesCount;
@property (readonly, nonatomic) double *doubleValues;
@property (retain, nonatomic) NSMutableArray *stringValues;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;

+ (Class)stringValueType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearStringValues;
- (unsigned long long)stringValuesCount;
- (void)addDoubleValue:(double)a0;
- (void)addStringValue:(id)a0;
- (void)clearDoubleValues;
- (double)doubleValueAtIndex:(unsigned long long)a0;
- (void)setDoubleValues:(double *)a0 count:(unsigned long long)a1;
- (id)stringValueAtIndex:(unsigned long long)a0;

@end
