@interface OspreyKeychain : NSObject

- (id)createKeychainQuery;
- (char)deleteDataWithIdentifier:(id)a0;
- (id)fetchDataWithIdentifier:(id)a0;
- (char)saveData:(id)a0 withIdentifier:(id)a1;

@end
