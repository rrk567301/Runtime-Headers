@class _CDContextualChangeRegistration, _CDContextualPredicate, _CDContextualKeyPath;

@interface ATXHeuristicCacheContextStoreExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
}

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_start;
- (void)_stop;
- (id)initWithCDContextualKeyPath:(id)a0;

@end
