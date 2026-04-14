@class NSString, NSArray, ABAddressBook;

@interface ABFindsPreferredLinkedPerson : NSObject {
    ABAddressBook *_addressBook;
    NSString *_linkId;
    NSArray *_sortDescriptors;
}

+ (id)preferredNameFinderWithAddressBook:(id)a0 linkId:(id)a1;
+ (id)preferredPhotoFinderWithAddressBook:(id)a0 linkId:(id)a1;

- (void)dealloc;
- (id)initWithAddressBook:(id)a0 linkId:(id)a1 tieBreakers:(id)a2;
- (id)findPerson;
- (id)getLinkedPeople;
- (id)sortPeople:(id)a0;

@end
