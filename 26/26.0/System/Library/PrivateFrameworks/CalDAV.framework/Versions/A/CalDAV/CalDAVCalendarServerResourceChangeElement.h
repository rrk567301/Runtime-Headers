@class NSURL, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem

@property (readonly, nonatomic) NSURL *fullHrefURL;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *changedBy;

- (id)init;
- (id)copyParseRules;
- (void).cxx_destruct;

@end
