@class MTRPluginPBMHeader, MTRPluginPBMError, NSError, MTRPluginPBMVariableValue;

@interface MTRPluginPBMVariableValueResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char checkinRequested : 1; } _has;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id object;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) BOOL hasErrorValue;
@property (retain, nonatomic) MTRPluginPBMError *errorValue;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) MTRPluginPBMVariableValue *value;
@property (nonatomic) BOOL hasCheckinRequested;
@property (nonatomic) BOOL checkinRequested;

+ (id)variableValueFromResponsePayloadData:(id)a0;

- (id)initWithError:(id)a0;
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
- (id)initWithObjectValue:(id)a0;

@end
