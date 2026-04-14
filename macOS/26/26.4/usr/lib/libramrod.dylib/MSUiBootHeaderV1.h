@interface MSUiBootHeaderV1 : MSUiBootHeader

@property unsigned int valid;

- (BOOL)isValid;
- (long long)compareTo:(id)a0;
- (unsigned int)length;
- (void)invalidate;
- (id)description;
- (BOOL)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;

@end
