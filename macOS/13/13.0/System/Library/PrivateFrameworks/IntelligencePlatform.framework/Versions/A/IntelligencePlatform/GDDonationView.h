@class _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

@interface GDDonationView : NSObject <GDDonationView> {
    id<GDViewAccessAssertion> _accessAssertion;
    _PASSqliteDatabase *_db;
}

- (void).cxx_destruct;
- (id)initWithAccessAssertion:(id)a0 database:(id)a1;
- (void)enumerateTriples:(id /* block */)a0;

@end
