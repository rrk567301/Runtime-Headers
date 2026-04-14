@class NSURL, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem

@property (readonly, nonatomic) NSURL *fullHrefURL;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *changedBy;

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)init;

@end
