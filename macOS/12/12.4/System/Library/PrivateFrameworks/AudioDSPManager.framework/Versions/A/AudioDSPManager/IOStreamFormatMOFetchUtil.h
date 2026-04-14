@class NSManagedObjectContext;

@interface IOStreamFormatMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchAllWithCategory:(id)a0 mode:(id)a1 portType:(id)a2;
- (id)fetchWithCategory:(id)a0 mode:(id)a1 portType:(id)a2;

@end
