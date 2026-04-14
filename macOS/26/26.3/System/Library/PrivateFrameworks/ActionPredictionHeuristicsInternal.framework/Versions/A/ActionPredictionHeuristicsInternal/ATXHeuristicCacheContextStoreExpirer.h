@class _CDContextualChangeRegistration, _CDContextualPredicate, _CDContextualKeyPath;

@interface ATXHeuristicCacheContextStoreExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCDContextualKeyPath:(id)a0;
- (void)_stop;
- (id)description;
- (void)_start;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
