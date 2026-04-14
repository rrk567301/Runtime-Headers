@interface MSUiBootHeaderV1 : MSUiBootHeader

@property unsigned int valid;

- (void)invalidate;
- (unsigned int)length;
- (long long)compareTo:(id)a0;
- (id)description;
- (BOOL)isValid;
- (BOOL)loadHeaderAtOffset:(unsigned int)a0;
- (void)makeValid;
- (id)packStructure;
- (void)setAsFirstGeneration;

@end
