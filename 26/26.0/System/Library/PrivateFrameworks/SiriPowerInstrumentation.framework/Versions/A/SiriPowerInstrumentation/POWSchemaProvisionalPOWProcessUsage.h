@class NSData;

@interface POWSchemaProvisionalPOWProcessUsage : SISchemaInstrumentationMessage {
    struct { unsigned char cpuCycles : 1; unsigned char cpuInstructions : 1; unsigned char gpuCycles : 1; unsigned char memoryFootprint : 1; } _has;
}

@property (nonatomic) unsigned long long cpuCycles;
@property (nonatomic) BOOL hasCpuCycles;
@property (nonatomic) unsigned long long cpuInstructions;
@property (nonatomic) BOOL hasCpuInstructions;
@property (nonatomic) unsigned long long gpuCycles;
@property (nonatomic) BOOL hasGpuCycles;
@property (nonatomic) unsigned long long memoryFootprint;
@property (nonatomic) BOOL hasMemoryFootprint;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (void)deleteCpuInstructions;
- (id)dictionaryRepresentation;
- (void)deleteMemoryFootprint;
- (void)deleteGpuCycles;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCpuCycles;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
