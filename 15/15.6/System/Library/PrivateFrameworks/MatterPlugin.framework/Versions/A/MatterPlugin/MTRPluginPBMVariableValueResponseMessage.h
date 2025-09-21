@class MTRPluginPBMHeader, MTRPluginPBMError, NSError, MTRPluginPBMVariableValue;

@interface MTRPluginPBMVariableValueResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char checkinRequested : 1; } _has;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id object;
@property (readonly, getter=isValid) char valid;
@property (readonly, nonatomic) char hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) char hasErrorValue;
@property (retain, nonatomic) MTRPluginPBMError *errorValue;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) MTRPluginPBMVariableValue *value;
@property (nonatomic) char hasCheckinRequested;
@property (nonatomic) char checkinRequested;

+ (id)variableValueFromResponsePayloadData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithObjectValue:(id)a0;

@end
