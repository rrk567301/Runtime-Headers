@class NSString, NSMutableArray;

@interface PersonLinkingPerson : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *emails;

+ (Class)emailsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEmails:(id)a0;
- (void)clearEmails;
- (id)emailsAtIndex:(unsigned long long)a0;
- (unsigned long long)emailsCount;

@end
