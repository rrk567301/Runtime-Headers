@class ATXHeuristicDevice;

@interface ATXContactsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void)contactsWithName:(id)a0 callback:(id /* block */)a1;
- (void)contactsWithEmail:(id)a0 callback:(id /* block */)a1;
- (id)initWithDevice:(id)a0;
- (void)contactsWithPhone:(id)a0 callback:(id /* block */)a1;
- (void)contactsWithIdentifiers:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_contactsWithPredicate:(id)a0 callback:(id /* block */)a1;

@end
