@class NSMutableArray;

@interface HDCodableOntologyLocalizedEducationContent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;

+ (Class)sectionsType;

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
- (void)clearSections;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)a0;
- (id)sectionsAtIndex:(unsigned long long)a0;

@end
