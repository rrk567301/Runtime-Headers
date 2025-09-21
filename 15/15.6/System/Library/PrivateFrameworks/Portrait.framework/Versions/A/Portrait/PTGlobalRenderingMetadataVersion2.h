@interface PTGlobalRenderingMetadataVersion2 : PTGlobalRenderingMetadata {
    unsigned int _renderingVersion;
    char _readSuccessAll;
}

@property (nonatomic) unsigned int hwModelID;
@property (nonatomic) unsigned int sensorID;
@property (nonatomic) unsigned int sourceColorBitDepth;

- (id)initWithData:(id)a0;
- (void)applyToRenderRequest:(id)a0;
- (void)applyToRenderState:(id)a0;
- (char)matchesRenderState:(id)a0;
- (unsigned int)renderingVersion;
- (char)applyToRenderState:(id)a0 error:(id *)a1;
- (id)initWithMinorVersion:(unsigned int)a0;
- (void)setRenderingVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (char)writeToData:(id)a0 withOptions:(id)a1;

@end
