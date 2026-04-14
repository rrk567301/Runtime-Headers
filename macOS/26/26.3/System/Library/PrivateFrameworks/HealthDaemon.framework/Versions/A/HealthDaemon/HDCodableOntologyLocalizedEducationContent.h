@class NSMutableArray;

@interface HDCodableOntologyLocalizedEducationContent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;

+ (Class)sectionsType;

- (unsigned long long)sectionsCount;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)clearSections;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)addSections:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
