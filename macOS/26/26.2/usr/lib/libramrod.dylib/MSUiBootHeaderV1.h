@interface MSUiBootHeaderV1 : MSUiBootHeader

@property unsigned int valid;

- (void)invalidate;
- (unsigned int)length;
- (BOOL)isValid;
- (long long)compareTo:(id)a0;
- (id)description;
- (BOOL)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;

@end
