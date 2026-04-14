@interface OspreyKeychain : NSObject

- (id)createKeychainQuery;
- (BOOL)saveData:(id)a0 withIdentifier:(id)a1;
- (id)fetchDataWithIdentifier:(id)a0;
- (BOOL)deleteDataWithIdentifier:(id)a0;

@end
