@class PersonLinkingPerson, NSString;

@interface PersonLinkingPersonPair : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char grade : 1; } _has;
}

@property (readonly, nonatomic) char hasSourcePerson;
@property (retain, nonatomic) PersonLinkingPerson *sourcePerson;
@property (readonly, nonatomic) char hasTargetPerson;
@property (retain, nonatomic) PersonLinkingPerson *targetPerson;
@property (nonatomic) char hasGrade;
@property (nonatomic) char grade;
@property (nonatomic) char hasConfidence;
@property (nonatomic) float confidence;
@property (readonly, nonatomic) char hasReason;
@property (retain, nonatomic) NSString *reason;

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

@end
