@interface FCEmptyContentArchive : FCContentArchive

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)unarchiveIntoContentContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)manifest;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
