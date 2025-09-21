@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithTransactionNumber:(id)a0 andStoreID:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)storeTokens;
- (BOOL)isEqual:(id)a0;

@end
