@class NSMutableData, NSMutableArray;

@interface UARPMetaDataPersonalizationFTABPayload : UARPMetaData {
    NSMutableArray *_tlvsMutable;
    NSMutableData *_tlvDataMutable;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)tlvValue;
- (id)tlvs;
- (id)subfileLongname;
- (BOOL)addSubfileMeasurement:(id)a0;
- (id)containsTLV:(Class)a0;
- (id)initWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)initWithPropertyListValue:(id)a0 relativeURL:(id)a1;
- (id)subfileDigest;
- (id)subfileEPRO;
- (id)subfileESEC;
- (id)subfileHashAlgorithm;
- (id)subfileTag;
- (id)subfileTrusted;

@end
