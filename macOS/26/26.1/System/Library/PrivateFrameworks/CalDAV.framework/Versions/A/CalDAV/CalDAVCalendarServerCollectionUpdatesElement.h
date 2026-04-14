@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement

@property (readonly, nonatomic) int state;

- (void)setPublish:(id)a0;
- (id)copyParseRules;
- (void)setUnpublish:(id)a0;

@end
