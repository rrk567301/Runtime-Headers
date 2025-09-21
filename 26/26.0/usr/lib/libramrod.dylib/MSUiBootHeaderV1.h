@interface MSUiBootHeaderV1 : MSUiBootHeader

@property unsigned int valid;

- (long long)compareTo:(id)a0;
- (BOOL)isValid;
- (void)invalidate;
- (id)description;
- (unsigned int)length;
- (BOOL)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;

@end
