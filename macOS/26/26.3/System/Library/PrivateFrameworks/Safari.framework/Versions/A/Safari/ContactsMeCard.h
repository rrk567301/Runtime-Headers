@class CNContact;

@interface ContactsMeCard : NSObject {
    CNContact *_me;
    BOOL _meNeedsUpdate;
}

@property (readonly, nonatomic) CNContact *me;

- (id)init;
- (void)_contactsChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)test_performBlockWithTemporaryMe:(id)a0 block:(id /* block */)a1;

@end
