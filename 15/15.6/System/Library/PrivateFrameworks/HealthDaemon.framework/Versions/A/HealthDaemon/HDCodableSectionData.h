@class NSMutableArray;

@interface HDCodableSectionData : PBCodable <NSCopying> {
    struct { unsigned char sectionDataType : 1; unsigned char timestamp : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *stringValues;
@property (nonatomic) char hasSectionDataType;
@property (nonatomic) long long sectionDataType;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;

+ (Class)stringValuesType;

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
- (void)addStringValues:(id)a0;
- (void)clearStringValues;
- (id)stringValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)stringValuesCount;

@end
