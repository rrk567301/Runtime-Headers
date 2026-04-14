@class MTRPluginPBMVariableValue, MTRPluginPBMHeader;

@interface MTRPluginPBMDeviceControllerMessage : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) MTRPluginPBMVariableValue *value;

+ (id)deviceControllerMessageFromMessage:(id)a0;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
