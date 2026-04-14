@interface MSUiBootHeaderV1 : MSUiBootHeader

@property unsigned int valid;

- (long long)compareTo:(id)a0;
- (void)invalidate;
- (unsigned int)length;
- (id)description;
- (BOOL)isValid;
- (BOOL)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;

@end
