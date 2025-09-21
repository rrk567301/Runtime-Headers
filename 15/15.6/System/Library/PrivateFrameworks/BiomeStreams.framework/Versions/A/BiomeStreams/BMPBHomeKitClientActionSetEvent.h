@class NSString, BMPBHomeKitClientBase, NSMutableArray;

@interface BMPBHomeKitClientActionSetEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) BMPBHomeKitClientBase *base;
@property (readonly, nonatomic) char hasActionSetUniqueIdentifier;
@property (retain, nonatomic) NSString *actionSetUniqueIdentifier;
@property (readonly, nonatomic) char hasActionSetType;
@property (retain, nonatomic) NSString *actionSetType;
@property (retain, nonatomic) NSMutableArray *associatedAccessoryUniqueIdentifiers;
@property (readonly, nonatomic) char hasActionSetName;
@property (retain, nonatomic) NSString *actionSetName;
@property (readonly, nonatomic) char hasHomeName;
@property (retain, nonatomic) NSString *homeName;

+ (Class)associatedAccessoryUniqueIdentifiersType;

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
- (void)addAssociatedAccessoryUniqueIdentifiers:(id)a0;
- (id)associatedAccessoryUniqueIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)associatedAccessoryUniqueIdentifiersCount;
- (void)clearAssociatedAccessoryUniqueIdentifiers;

@end
