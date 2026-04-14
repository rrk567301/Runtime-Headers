@class CNContact;

@interface ContactsMeCard : NSObject {
    CNContact *_me;
    BOOL _meNeedsUpdate;
}

@property (readonly, nonatomic) CNContact *me;

- (void).cxx_destruct;
- (void)_contactsChanged:(id)a0;
- (id)init;
- (void)dealloc;
- (void)test_performBlockWithTemporaryMe:(id)a0 block:(id /* block */)a1;

@end
