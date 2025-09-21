@class NSSet;

@interface TDImageStackAsset : TDAsset

@property (retain, nonatomic) NSSet *renditions;

- (char)hasCursorProduction;
- (char)hasProduction;
- (id)imageStackDataWithDocument:(id)a0;

@end
