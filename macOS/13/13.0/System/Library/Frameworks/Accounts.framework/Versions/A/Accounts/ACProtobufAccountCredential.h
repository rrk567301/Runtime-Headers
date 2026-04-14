@class NSDictionary, NSMutableArray, NSString;

@interface ACProtobufAccountCredential : PBCodable <NSCopying>

@property (copy, nonatomic) NSDictionary *credentialItemsDictionary;
@property (retain, nonatomic) NSMutableArray *credentialItems;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;
@property (nonatomic) BOOL requiresTouchID;

+ (Class)dirtyPropertiesType;
+ (Class)credentialItemsType;

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
- (void)clearDirtyProperties;
- (void)addDirtyProperties:(id)a0;
- (unsigned long long)dirtyPropertiesCount;
- (id)dirtyPropertiesAtIndex:(unsigned long long)a0;
- (void)clearCredentialItems;
- (void)addCredentialItems:(id)a0;
- (unsigned long long)credentialItemsCount;
- (id)credentialItemsAtIndex:(unsigned long long)a0;

@end
