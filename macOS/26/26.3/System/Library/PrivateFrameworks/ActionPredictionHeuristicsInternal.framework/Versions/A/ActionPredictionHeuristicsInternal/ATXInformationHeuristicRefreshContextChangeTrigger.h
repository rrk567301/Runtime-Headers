@class NSString, _CDContextualPredicate, _CDContextualKeyPath, _CDContextualChangeRegistration;

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
    NSString *_registrationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCDContextualKeyPath:(id)a0 predicate:(id)a1 registrationIdentifier:(id)a2;
- (id)initWithCDContextualKeyPath:(id)a0;
- (void)_stop;
- (id)description;
- (void)_start;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCDContextualKeyPath:(id)a0 equalToValue:(id)a1 withMinimumDurationInPreviousState:(double)a2;

@end
