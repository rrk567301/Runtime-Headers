@class NSSet;

@interface TDImageStackAsset : TDAsset

@property (retain, nonatomic) NSSet *renditions;

- (BOOL)hasProduction;
- (BOOL)hasCursorProduction;
- (id)imageStackDataWithDocument:(id)a0;

@end
