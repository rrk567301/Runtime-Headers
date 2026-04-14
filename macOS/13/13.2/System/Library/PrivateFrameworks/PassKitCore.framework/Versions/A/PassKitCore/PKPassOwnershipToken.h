@class NSString;

@interface PKPassOwnershipToken : NSObject {
    NSString *_ownershipToken;
}

@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (copy, nonatomic) NSString *ownershipToken;

+ (void)queryKeychainForOwnershipTokens:(id /* block */)a0;
+ (void)deleteAllLocalKeychainOwnershipTokens;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (id)_wrapperWithType:(unsigned long long)a0 identifier:(id)a1;
- (id)initWithOwnershipToken:(id)a0 identifier:(id)a1;
- (void)deleteTokenFromKeychain;
- (void)deleteTokenFromLocalKeychain;
- (void)_writeToKeychain;
- (void)_readFromKeychain;

@end
