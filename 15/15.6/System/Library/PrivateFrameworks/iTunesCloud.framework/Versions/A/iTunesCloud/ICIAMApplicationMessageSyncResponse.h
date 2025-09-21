@class NSString, NSMutableArray;

@interface ICIAMApplicationMessageSyncResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSMutableArray *syncCommands;

+ (Class)syncCommandsType;

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
- (void)addSyncCommands:(id)a0;
- (void)clearSyncCommands;
- (id)syncCommandsAtIndex:(unsigned long long)a0;
- (unsigned long long)syncCommandsCount;

@end
