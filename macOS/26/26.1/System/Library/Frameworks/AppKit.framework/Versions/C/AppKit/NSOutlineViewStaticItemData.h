@class NSTableRowView, NSMutableArray;

@interface NSOutlineViewStaticItemData : NSObject <NSCoding>

@property (retain) NSMutableArray *children;
@property (retain) NSTableRowView *rowView;
@property BOOL expandable;
@property BOOL expanded;
@property BOOL loadedFromEncoder;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;

@end
