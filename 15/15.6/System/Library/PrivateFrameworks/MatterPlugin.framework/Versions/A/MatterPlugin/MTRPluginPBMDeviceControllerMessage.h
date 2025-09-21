@class MTRPluginPBMVariableValue, MTRPluginPBMHeader;

@interface MTRPluginPBMDeviceControllerMessage : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) char hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) MTRPluginPBMVariableValue *value;

+ (id)deviceControllerMessageFromMessage:(id)a0;

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
