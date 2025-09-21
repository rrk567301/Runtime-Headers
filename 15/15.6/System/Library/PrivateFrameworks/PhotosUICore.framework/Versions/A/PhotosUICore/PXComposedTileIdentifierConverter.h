@class NSArray, NSString;

@interface PXComposedTileIdentifierConverter : NSObject <PXTileIdentifierConverter>

@property (readonly, copy, nonatomic) NSArray *converters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0;
- (id)initWithTileIdentifierConverters:(id)a0;
- (char)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; } *)a0 group:(unsigned long long *)a1;

@end
