@class NSData, MTRPluginPBMVariableValueList, NSString, MTRPluginPBMVariableValueDictionary, MTRPluginPBMClusterPath, MTRPluginPBMCommandPath, MTRPluginPBMError, MTRPluginPBMAttributePath, MTRPluginPBMEventPath, MTRPluginPBMDate, MTRPluginPBMUUID, MTRPluginPBMURL;

@interface MTRPluginPBMVariableValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; unsigned char unsignedIntegerValue : 1; } _has;
}

@property (retain, nonatomic) id object;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) char hasUnsignedIntegerValue;
@property (nonatomic) unsigned long long unsignedIntegerValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) char hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) char hasUuidValue;
@property (retain, nonatomic) MTRPluginPBMUUID *uuidValue;
@property (readonly, nonatomic) char hasDateValue;
@property (retain, nonatomic) MTRPluginPBMDate *dateValue;
@property (readonly, nonatomic) char hasUrlValue;
@property (retain, nonatomic) MTRPluginPBMURL *urlValue;
@property (readonly, nonatomic) char hasArrayValue;
@property (retain, nonatomic) MTRPluginPBMVariableValueList *arrayValue;
@property (readonly, nonatomic) char hasSetValue;
@property (retain, nonatomic) MTRPluginPBMVariableValueList *setValue;
@property (readonly, nonatomic) char hasDictionaryValue;
@property (retain, nonatomic) MTRPluginPBMVariableValueDictionary *dictionaryValue;
@property (readonly, nonatomic) char hasErrorValue;
@property (retain, nonatomic) MTRPluginPBMError *errorValue;
@property (readonly, nonatomic) char hasClusterPathValue;
@property (retain, nonatomic) MTRPluginPBMClusterPath *clusterPathValue;
@property (readonly, nonatomic) char hasAttributePathValue;
@property (retain, nonatomic) MTRPluginPBMAttributePath *attributePathValue;
@property (readonly, nonatomic) char hasCommandPathValue;
@property (retain, nonatomic) MTRPluginPBMCommandPath *commandPathValue;
@property (readonly, nonatomic) char hasEventPathValue;
@property (retain, nonatomic) MTRPluginPBMEventPath *eventPathValue;

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
- (char)_setObject:(id)a0;
- (id)initWithObjectValue:(id)a0;

@end
