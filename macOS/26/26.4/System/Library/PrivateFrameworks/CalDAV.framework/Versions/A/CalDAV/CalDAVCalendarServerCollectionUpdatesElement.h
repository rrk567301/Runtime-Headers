@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement

@property (readonly, nonatomic) int state;

- (id)copyParseRules;
- (void)setUnpublish:(id)a0;
- (void)setPublish:(id)a0;

@end
