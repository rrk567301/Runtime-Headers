@class NSMutableString, ABAddressBook;

@interface ABAddressBookSummaryBuilder : NSObject {
    ABAddressBook *_addressBook;
    NSMutableString *_summary;
}

- (void)dealloc;
- (id)initWithAddressBook:(id)a0;
- (id)buildSummary;
- (void)_prepareRepresentation;
- (void)_summarizeRecord:(id)a0 withBuilder:(id)a1;
- (void)_summarizeRecords:(id)a0 withBuilder:(id)a1;
- (void)_addSummaryHeader;
- (void)_summarizePeople;
- (id)_peopleInOrder;
- (void)_summarizeGroups;
- (id)_groupsInOrder;

@end
