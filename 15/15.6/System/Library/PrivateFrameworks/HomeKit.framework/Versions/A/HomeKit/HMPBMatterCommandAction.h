@class NSData, NSMutableArray;

@interface HMPBMatterCommandAction : PBCodable <NSCopying> {
    struct { unsigned char enforceExecutionOrder : 1; } _has;
}

@property (readonly, nonatomic) char hasActionUUID;
@property (retain, nonatomic) NSData *actionUUID;
@property (retain, nonatomic) NSMutableArray *commands;
@property (nonatomic) char hasEnforceExecutionOrder;
@property (nonatomic) char enforceExecutionOrder;

+ (Class)commandsType;

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
- (void)addCommands:(id)a0;
- (void)clearCommands;
- (id)commandsAtIndex:(unsigned long long)a0;
- (unsigned long long)commandsCount;

@end
