@interface PXMemoriesFeedTileIdentifierConverter : PXSectionedTileIdentifierConverter

- (char)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0;
- (char)_shouldConvertIdentifierFromMemory:(id)a0 toMemory:(id)a1;
- (char)_shouldConvertIdentifierFromMemoryInfo:(id)a0 toMemoryInfo:(id)a1;
- (char)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(unsigned long long *)a1;

@end
