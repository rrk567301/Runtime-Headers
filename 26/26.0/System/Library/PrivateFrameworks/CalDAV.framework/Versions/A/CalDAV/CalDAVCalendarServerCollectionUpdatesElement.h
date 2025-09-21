@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement

@property (readonly, nonatomic) int state;

- (void)setUnpublish:(id)a0;
- (void)setPublish:(id)a0;
- (id)copyParseRules;

@end
