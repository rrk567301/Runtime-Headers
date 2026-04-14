@class NSData, NSMutableArray;

@interface HMPBMatterCommandAction : PBCodable <NSCopying> {
    struct { unsigned char enforceExecutionOrder : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasActionUUID;
@property (retain, nonatomic) NSData *actionUUID;
@property (retain, nonatomic) NSMutableArray *commands;
@property (nonatomic) BOOL hasEnforceExecutionOrder;
@property (nonatomic) BOOL enforceExecutionOrder;

+ (Class)commandsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addCommands:(id)a0;
- (void)clearCommands;
- (id)commandsAtIndex:(unsigned long long)a0;
- (unsigned long long)commandsCount;

@end
