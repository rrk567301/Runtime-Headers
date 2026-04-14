@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) long long created;
@property (nonatomic) long long updated;
@property (nonatomic) long long deleted;

- (void)setUpdatedItem:(id)a0;
- (void)setCreatedItem:(id)a0;
- (id)init;
- (id)copyParseRules;
- (void)setDeletedItem:(id)a0;

@end
