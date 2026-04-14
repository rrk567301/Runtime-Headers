@class NSPredicate, NSString;

@interface _EXQuery : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ inner;
    void /* unknown type, empty encoding */ resultType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) BOOL includePostprocessing;
@property (nonatomic) BOOL allowsDuplicates;
@property (nonatomic) BOOL includeUpdatingApps;
@property (nonatomic, copy) NSString *extensionPointIdentifier;
@property (nonatomic) unsigned int platform;
@property (nonatomic) BOOL excludeLockedApps;
@property (nonatomic) BOOL excludeDisabled;
@property (nonatomic, readonly) long long hash;

+ (id)executeQuery:(id)a0;
+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)extensionPointIdentifierQuery:(id)a0 platform:(unsigned int)a1;
+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (id)extensionPointIdentifierQuery:(id)a0;
+ (id)executeQueries:(id)a0;
+ (id)allExtensionsQuery;

- (BOOL)matchesRecord:(id)a0;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithExtensionPointIdentifier:(id)a0 predicate:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)matches:(id)a0;
- (id)init;

@end
