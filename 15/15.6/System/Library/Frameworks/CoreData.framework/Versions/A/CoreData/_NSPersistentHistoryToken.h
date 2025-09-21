@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (id)initWithTransactionNumber:(id)a0 andStoreID:(id)a1;
- (id)storeTokens;

@end
