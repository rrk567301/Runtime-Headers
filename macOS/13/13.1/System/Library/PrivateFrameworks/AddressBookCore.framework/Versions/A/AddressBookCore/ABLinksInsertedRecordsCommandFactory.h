@class NSArray;

@interface ABLinksInsertedRecordsCommandFactory : ABLinksUnlinkedRecordsCommandFactory

@property (copy) NSArray *insertedRecords;

- (void)dealloc;
- (Class)builtCommandClass;
- (id)fetchPeople;
- (id)identifiersOfCollidedPeople;
- (id)fetchContactsWithIdentifiers:(id)a0;
- (id)combineInsertedAndMatchingRecords:(id)a0;

@end
