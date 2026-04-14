@class ABPersonListSearchController;

@interface ABPersonSearchConfiguration : NSObject {
    ABPersonListSearchController *_controller;
}

@property BOOL shouldSelectBestEntry;

- (void)searchForString:(id)a0;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)fetchContacts;
- (void)incrementSearchCount;
- (void)searchFieldDidChange:(id)a0;

@end
