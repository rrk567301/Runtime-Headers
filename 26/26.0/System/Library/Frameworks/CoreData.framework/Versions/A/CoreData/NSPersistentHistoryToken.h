@interface NSPersistentHistoryToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTransactionNumber:(id)a0 andStoreID:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)storeTokens;

@end
