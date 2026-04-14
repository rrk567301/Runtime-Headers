@class PersonLinkingPerson;

@interface PersonLinkingPersonPair : PBCodable <NSCopying> {
    struct { unsigned char grade : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGraphPerson;
@property (retain, nonatomic) PersonLinkingPerson *graphPerson;
@property (readonly, nonatomic) BOOL hasSourcePerson;
@property (retain, nonatomic) PersonLinkingPerson *sourcePerson;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) BOOL grade;

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

@end
