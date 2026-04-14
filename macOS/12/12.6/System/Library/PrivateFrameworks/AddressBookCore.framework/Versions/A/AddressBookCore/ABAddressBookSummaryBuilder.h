@class NSMutableString, ABAddressBook;

@interface ABAddressBookSummaryBuilder : NSObject {
    ABAddressBook *_addressBook;
    NSMutableString *_summary;
}

- (void)dealloc;
- (id)initWithAddressBook:(id)a0;
- (id)buildSummary;
- (void)_prepareRepresentation;
- (void)_addSummaryHeader;
- (void)_summarizePeople;
- (void)_summarizeGroups;
- (void)_summarizeRecord:(id)a0 withBuilder:(id)a1;
- (id)_peopleInOrder;
- (void)_summarizeRecords:(id)a0 withBuilder:(id)a1;
- (id)_groupsInOrder;

@end
