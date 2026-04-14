@class NSTableRowView, NSMutableArray;

@interface NSOutlineViewStaticItemData : NSObject <NSCoding>

@property (retain) NSMutableArray *children;
@property (retain) NSTableRowView *rowView;
@property BOOL expandable;
@property BOOL expanded;
@property BOOL loadedFromEncoder;

- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
