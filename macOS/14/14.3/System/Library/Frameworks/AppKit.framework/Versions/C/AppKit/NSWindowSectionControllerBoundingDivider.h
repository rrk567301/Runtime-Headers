@interface NSWindowSectionControllerBoundingDivider : NSTrackingSeparatorToolbarItem

@property double explicitPosition;

+ (id)keyPathsForValuesAffecting_partitionPosition;

- (double)_partitionPosition;
- (double)dividerWidth;

@end
