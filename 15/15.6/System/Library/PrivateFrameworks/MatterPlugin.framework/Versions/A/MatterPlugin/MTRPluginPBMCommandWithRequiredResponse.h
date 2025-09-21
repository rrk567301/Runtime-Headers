@class MTRPluginPBMVariableValue, MTRPluginPBMCommandPath, MTRCommandWithRequiredResponse;

@interface MTRPluginPBMCommandWithRequiredResponse : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) MTRCommandWithRequiredResponse *commandWithRequiredResponse;
@property (readonly, nonatomic) char hasCommandPath;
@property (retain, nonatomic) MTRPluginPBMCommandPath *commandPath;
@property (readonly, nonatomic) char hasCommandFields;
@property (retain, nonatomic) MTRPluginPBMVariableValue *commandFields;
@property (readonly, nonatomic) char hasRequiredResponse;
@property (retain, nonatomic) MTRPluginPBMVariableValue *requiredResponse;

+ (id)commandWithRequiredResponse:(id)a0;
+ (id)commandWithRequiredResponseFromMessage:(id)a0;

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

@end
