@class NSColor, NSArray;

@interface PXSharedLibraryFaceTileImageProviderModel : PXObservable

@property (readonly, nonatomic) char includeMeContact;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) char isRTL;
@property (readonly, nonatomic) char isAscending;
@property (readonly, nonatomic) double imageDiameter;
@property (readonly, nonatomic) double imageOffset;
@property (readonly, copy, nonatomic) NSColor *backgroundColor;
@property (readonly, copy, nonatomic) NSColor *borderColor;
@property (readonly, nonatomic) double borderWidth;
@property (readonly, copy, nonatomic) NSArray *faceTileCombinerItems;

- (id)init;
- (void).cxx_destruct;
- (void)setBorderWidth:(double)a0;
- (void)setBorderColor:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setDisplayScale:(double)a0;
- (void)setImageOffset:(double)a0;
- (void)setIsRTL:(char)a0;
- (void)setIsAscending:(char)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setFaceTileCombinerItems:(id)a0;
- (void)setImageDiameter:(double)a0;
- (void)setIncludeMeContact:(char)a0;

@end
