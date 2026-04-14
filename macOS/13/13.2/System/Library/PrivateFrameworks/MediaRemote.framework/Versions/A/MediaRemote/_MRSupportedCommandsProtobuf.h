@class NSMutableArray;

@interface _MRSupportedCommandsProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *supportedCommands;

+ (Class)supportedCommandType;

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
- (void)clearSupportedCommands;
- (void)addSupportedCommand:(id)a0;
- (unsigned long long)supportedCommandsCount;
- (id)supportedCommandAtIndex:(unsigned long long)a0;

@end
