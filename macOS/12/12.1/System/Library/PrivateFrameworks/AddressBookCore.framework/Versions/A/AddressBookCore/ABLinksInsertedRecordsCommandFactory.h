@class NSArray;

@interface ABLinksInsertedRecordsCommandFactory : ABLinksUnlinkedRecordsCommandFactory

@property (copy) NSArray *insertedRecords;

- (void)dealloc;
- (id)identifiersOfCollidedPeople;
- (id)fetchContactsWithIdentifiers:(id)a0;
- (id)combineInsertedAndMatchingRecords:(id)a0;
- (Class)builtCommandClass;
- (id)fetchPeople;

@end
