@class NSString, NSMutableArray, _MRUserIdentityProtobuf;

@interface _MRGroupSessionJoinRequestProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentity;
@property (retain, nonatomic) _MRUserIdentityProtobuf *identity;
@property (retain, nonatomic) NSMutableArray *oobKeys;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

+ (Class)oobKeysType;

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
- (id)oobKeysAtIndex:(unsigned long long)a0;
- (void)addOobKeys:(id)a0;
- (void)clearOobKeys;
- (unsigned long long)oobKeysCount;

@end
