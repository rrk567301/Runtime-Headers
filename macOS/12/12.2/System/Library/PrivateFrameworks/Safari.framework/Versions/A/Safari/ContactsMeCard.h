@class CNContact;

@interface ContactsMeCard : NSObject {
    CNContact *_me;
    BOOL _meNeedsUpdate;
}

@property (readonly, nonatomic) CNContact *me;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_contactsChanged:(id)a0;

@end
