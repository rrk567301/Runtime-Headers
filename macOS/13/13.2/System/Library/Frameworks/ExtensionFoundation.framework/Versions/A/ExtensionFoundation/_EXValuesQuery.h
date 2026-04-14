@class NSString, NSPredicate;

@interface _EXValuesQuery : _EXQuery {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)platform;
- (id)predicate;
- (void)setPredicate:(id)a0;
- (id)extensionPointIdentifier;
- (void)setPlatform:(unsigned int)a0;
- (BOOL)matchesRecord:(id)a0;
- (struct { unsigned int x0[8]; })hostAuditToken;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (id)initWithExtensionPointIdentifier:(id)a0 predicate:(id)a1;
- (id)extensionPointRecords;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)isEqualToQuery:(id)a0;
- (void)setExtensionPointIdentifier:(id)a0;

@end
