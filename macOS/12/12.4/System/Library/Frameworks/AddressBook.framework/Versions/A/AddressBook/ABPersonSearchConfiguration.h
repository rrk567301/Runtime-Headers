@class ABPersonListSearchController;

@interface ABPersonSearchConfiguration : NSObject {
    ABPersonListSearchController *_controller;
}

@property BOOL shouldSelectBestEntry;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)fetchContacts;
- (void)incrementSearchCount;
- (void)searchForString:(id)a0;
- (void)searchFieldDidChange:(id)a0;

@end
