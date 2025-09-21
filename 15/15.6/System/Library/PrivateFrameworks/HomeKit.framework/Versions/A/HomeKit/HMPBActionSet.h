@class NSString, NSMutableArray, NSData;

@interface HMPBActionSet : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) char hasActionSetType;
@property (retain, nonatomic) NSString *actionSetType;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) char hasHomeUUID;
@property (retain, nonatomic) NSData *homeUUID;

+ (Class)actionsType;

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
- (void)addActions:(id)a0;
- (id)actionsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionsCount;
- (void)clearActions;

@end
