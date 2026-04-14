@class ABPerson, ABAddressBook;

@interface ABCNPhotoFuture : CNFuture {
    ABAddressBook *_addressBook;
    ABPerson *_person;
    long long _tag;
}

- (void)start;
- (void)didCancel;
- (void)dealloc;
- (id)initWithAddressBook:(id)a0 person:(id)a1;
- (id)photoForImageData:(id)a0;

@end
