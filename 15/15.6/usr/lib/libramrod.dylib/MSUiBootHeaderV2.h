@interface MSUiBootHeaderV2 : MSUiBootHeaderV1

@property (nonatomic) unsigned int headerSignature;
@property (nonatomic) char *headerHash;
@property (nonatomic) char *headerReserved;
@property (nonatomic) unsigned int secondaryPayloadOffset;
@property unsigned int headerVersion;

- (void)dealloc;
- (id)description;
- (unsigned int)length;
- (char)isValid;
- (void)invalidate;
- (id)computeHash;
- (id)_hashData:(id)a0 withMethod:(id)a1;
- (id)_hashDataWithNativeHashMethod:(id)a0;
- (id)initWithIOServiceWriter:(id)a0;
- (char)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;
- (char)validHash;
- (char)validHeaderSignature;

@end
