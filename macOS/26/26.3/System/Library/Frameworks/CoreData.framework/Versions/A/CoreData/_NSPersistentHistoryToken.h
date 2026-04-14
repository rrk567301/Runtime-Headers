@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}

+ (BOOL)supportsSecureCoding;

- (id)storeTokens;
- (id)description;
- (long long)compare:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (id)initWithTransactionNumber:(id)a0 andStoreID:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
