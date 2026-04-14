@class NSString, NSPredicate;

@interface _EXValuesQuery : _EXQuery {
    unsigned int _platform;
    NSString *_extensionPointIdentifier;
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (unsigned int)platform;
- (id)predicate;
- (void)setPredicate:(id)a0;
- (id)extensionPointIdentifier;
- (struct { unsigned int x0[8]; })hostAuditToken;
- (void)setPlatform:(unsigned int)a0;
- (BOOL)matchesRecord:(id)a0;
- (id)extensionPointRecords;
- (BOOL)isEqualToQuery:(id)a0;
- (id)initWithExtensionPointIdentifier:(id)a0 predicate:(id)a1;
- (void)setExtensionPointIdentifier:(id)a0;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;

@end
