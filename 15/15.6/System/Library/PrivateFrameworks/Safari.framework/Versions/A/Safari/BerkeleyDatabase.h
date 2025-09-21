@class NSURL;

@interface BerkeleyDatabase : NSObject {
    struct __db { int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void *x7; void /* function */ *x8; } *_database;
}

@property (retain, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic, getter=isOpen) char open;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)dataForKey:(id)a0;
- (char)open:(id *)a0;
- (id)allData;
- (id)initWithDatabaseURL:(id)a0;
- (char)_tryOpeningDatabaseAtPath:(const char *)a0 error:(id *)a1;
- (char)_tryOpeningDatabaseOfType:(int)a0 atPath:(const char *)a1;

@end
