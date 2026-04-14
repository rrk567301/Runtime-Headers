@class NSString, NSMutableArray;

@interface BMPBPersonalFact : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSubjectId;
@property (retain, nonatomic) NSString *subjectId;
@property (readonly, nonatomic) BOOL hasSubjectAlias;
@property (retain, nonatomic) NSString *subjectAlias;
@property (retain, nonatomic) NSMutableArray *subjectIsas;
@property (readonly, nonatomic) BOOL hasPredicateId;
@property (retain, nonatomic) NSString *predicateId;
@property (readonly, nonatomic) BOOL hasObjectId;
@property (retain, nonatomic) NSString *objectId;
@property (readonly, nonatomic) BOOL hasObjectAlias;
@property (retain, nonatomic) NSString *objectAlias;

+ (Class)subjectIsaType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSubjectIsas;
- (void)addSubjectIsa:(id)a0;
- (unsigned long long)subjectIsasCount;
- (id)subjectIsaAtIndex:(unsigned long long)a0;

@end
