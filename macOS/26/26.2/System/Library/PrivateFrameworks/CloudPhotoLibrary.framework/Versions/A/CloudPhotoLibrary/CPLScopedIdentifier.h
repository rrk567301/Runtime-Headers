@class NSString;

@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding> {
    long long _scopeIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long scopeIndex;
@property (readonly, copy) NSString *scopeIdentifier;
@property (readonly, copy) NSString *identifier;
@property (readonly) NSString *stringRepresentation;

+ (id)scopedIdentifierWithString:(id)a0 includeScopeIndex:(BOOL)a1;
+ (id)descriptionWithScopeIdentifier:(id)a0 identifier:(id)a1;
+ (id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)a0;
+ (id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)a0;
+ (id)scopedIdentifierWithString:(id)a0 includeScopeIndex:(BOOL)a1 defaultScopeIdentifier:(id)a2;
+ (id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)a0;
+ (id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)a0;
+ (id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)a0;

- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (id)safeFilename;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initRelativeToScopedIdentifier:(id)a0 identifier:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithScopeIdentifier:(id)a0 identifier:(id)a1;
- (BOOL)isInACPLShare;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCPLArchiver:(id)a0;
- (id)initInMainScopeWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)cplSpecialHash;
- (id)description;
- (BOOL)cplSpecialIsEqual:(id)a0;
- (id)initWithStringRepresentation:(id)a0 defaultScopeIdentifier:(id)a1;
- (id)initWithScopeIdentifier:(id)a0 identifier:(id)a1 scopeIndex:(long long)a2;
- (id)descriptionWithNoScopeIndex;
- (id)plistArchiveWithCPLArchiver:(id)a0;

@end
