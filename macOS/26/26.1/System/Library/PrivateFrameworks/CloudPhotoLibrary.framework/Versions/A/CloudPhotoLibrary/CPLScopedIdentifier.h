@class NSString;

@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding> {
    long long _scopeIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long scopeIndex;
@property (readonly, copy) NSString *scopeIdentifier;
@property (readonly, copy) NSString *identifier;
@property (readonly) NSString *stringRepresentation;

+ (id)descriptionWithScopeIdentifier:(id)a0 identifier:(id)a1;
+ (id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)a0;
+ (id)scopedIdentifierWithString:(id)a0 includeScopeIndex:(BOOL)a1;
+ (id)scopedIdentifierWithString:(id)a0 includeScopeIndex:(BOOL)a1 defaultScopeIdentifier:(id)a2;
+ (id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)a0;
+ (id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)a0;

- (id)initWithScopeIdentifier:(id)a0 identifier:(id)a1 scopeIndex:(long long)a2;
- (id)initRelativeToScopedIdentifier:(id)a0 identifier:(id)a1;
- (unsigned long long)hash;
- (id)safeFilename;
- (id)descriptionWithNoScopeIndex;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)cplSpecialIsEqual:(id)a0;
- (BOOL)isInACPLShare;
- (id)initWithScopeIdentifier:(id)a0 identifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)cplSpecialHash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initInMainScopeWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCPLArchiver:(id)a0;
- (id)plistArchiveWithCPLArchiver:(id)a0;
- (id)initWithStringRepresentation:(id)a0 defaultScopeIdentifier:(id)a1;
- (id)redactedDescription;

@end
