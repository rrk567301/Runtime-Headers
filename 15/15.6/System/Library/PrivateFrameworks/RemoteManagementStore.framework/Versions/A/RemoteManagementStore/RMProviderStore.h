@class NSString, NSURL;

@interface RMProviderStore : RMBaseStore <NSSecureCoding, RMMutableStoreProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long scope;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *storeDescription;
@property (readonly, copy, nonatomic) NSURL *enrollmentURL;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) char defaultToInteractive;
@property (readonly, nonatomic) char dataSeparated;
@property (readonly, copy, nonatomic) NSString *personaIdentifier;

+ (void)storeWithIdentifier:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)createStoreWithType:(long long)a0 scope:(long long)a1 defaultToInteractive:(char)a2 dataSeparated:(char)a3 options:(id)a4 completionHandler:(id /* block */)a5;
+ (void)removeStoreWithIdentifier:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)storesWithScope:(long long)a0 completionHandler:(id /* block */)a1;

- (char)isEqual:(id)a0;
- (char)setMetadataValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)isEqualToStore:(id)a0;
- (void)applyChangesWithCompletionHandler:(id /* block */)a0;
- (void)deleteDeclarationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)linkStoreToProfileIdentifier:(id)a0 accountIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveDeclaration:(id)a0 completionHandler:(id /* block */)a1;

@end
