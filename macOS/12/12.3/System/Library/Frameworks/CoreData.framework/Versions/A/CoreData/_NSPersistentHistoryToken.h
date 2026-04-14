@class NSDictionary;

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)storeTokens;
- (long long)compareToken:(id)a0 error:(id *)a1;

@end
