@interface FCEmptyContentArchive : FCContentArchive

+ (BOOL)supportsSecureCoding;

- (id)manifest;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
