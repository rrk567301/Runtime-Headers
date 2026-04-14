@interface NSWindowSectionControllerBoundingDivider : NSTrackingSeparatorToolbarItem

@property double explicitPosition;

+ (id)keyPathsForValuesAffecting_partitionPosition;

- (double)dividerWidth;
- (double)_partitionPosition;

@end
