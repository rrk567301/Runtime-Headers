@class NSString, NSMutableArray, NSData;

@interface HMPBActionSet : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) BOOL hasActionSetType;
@property (retain, nonatomic) NSString *actionSetType;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasHomeUUID;
@property (retain, nonatomic) NSData *homeUUID;

+ (Class)actionsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)actionsCount;
- (void)clearActions;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addActions:(id)a0;
- (id)actionsAtIndex:(unsigned long long)a0;

@end
