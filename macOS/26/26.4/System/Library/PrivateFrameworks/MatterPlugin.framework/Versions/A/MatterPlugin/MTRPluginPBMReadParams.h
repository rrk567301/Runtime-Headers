@class MTRReadParams, MTRPluginPBMVariableValue;

@interface MTRPluginPBMReadParams : PBCodable <NSCopying> {
    struct { unsigned char assumeUnknownAttributesReportable : 1; unsigned char filterByFabric : 1; } _has;
}

@property (retain, nonatomic) MTRReadParams *readParams;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) BOOL hasFilterByFabric;
@property (nonatomic) BOOL filterByFabric;
@property (nonatomic) BOOL hasAssumeUnknownAttributesReportable;
@property (nonatomic) BOOL assumeUnknownAttributesReportable;
@property (readonly, nonatomic) BOOL hasMinEventNumber;
@property (retain, nonatomic) MTRPluginPBMVariableValue *minEventNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)initWithReadParams:(id)a0;

@end
