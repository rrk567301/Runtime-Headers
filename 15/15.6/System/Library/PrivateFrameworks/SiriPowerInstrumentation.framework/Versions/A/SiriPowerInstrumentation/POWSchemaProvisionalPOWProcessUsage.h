@class NSData;

@interface POWSchemaProvisionalPOWProcessUsage : SISchemaInstrumentationMessage {
    struct { unsigned char cpuCycles : 1; unsigned char cpuInstructions : 1; unsigned char gpuCycles : 1; unsigned char memoryFootprint : 1; } _has;
}

@property (nonatomic) unsigned long long cpuCycles;
@property (nonatomic) char hasCpuCycles;
@property (nonatomic) unsigned long long cpuInstructions;
@property (nonatomic) char hasCpuInstructions;
@property (nonatomic) unsigned long long gpuCycles;
@property (nonatomic) char hasGpuCycles;
@property (nonatomic) unsigned long long memoryFootprint;
@property (nonatomic) char hasMemoryFootprint;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGpuCycles;
- (void)deleteCpuCycles;
- (void)deleteCpuInstructions;
- (void)deleteMemoryFootprint;

@end
