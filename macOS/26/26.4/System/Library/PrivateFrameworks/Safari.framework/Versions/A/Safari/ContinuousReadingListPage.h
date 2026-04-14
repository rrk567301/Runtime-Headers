@class ReadingListItem;

@interface ContinuousReadingListPage : ContinuousReadingListPageItem

@property (readonly, nonatomic) ReadingListItem *readingListItem;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)urlString;
- (id)icon;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)title;
- (void).cxx_destruct;
- (id)itemDescription;
- (BOOL)hasDefaultSiteIcon;
- (id)initWithReadingListItem:(id)a0;
- (id)representedReadingListItem;
- (id)secondaryIcon;

@end
