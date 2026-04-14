@class NSArray;

@interface SearchUITableLayoutInfo : NSObject

@property (retain) NSArray *columnWidths;
@property (retain) NSArray *columnsWithEqualWidths;
@property (retain) NSArray *columnSpacing;
@property (retain) NSArray *internalAlignments;
@property double totalWidth;
@property long long centerIndex;
@property long long firstTrailingIndex;

- (void).cxx_destruct;

@end
