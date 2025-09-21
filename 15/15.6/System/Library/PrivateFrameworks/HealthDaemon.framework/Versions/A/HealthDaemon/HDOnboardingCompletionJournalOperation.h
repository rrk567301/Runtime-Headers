@class NSArray;

@interface HDOnboardingCompletionJournalOperation : HDJournalEntry <NSSecureCoding> {
    NSArray *_codableOnboardingCompletions;
    long long _syncProvenance;
}

@property (class, readonly) char supportsSecureCoding;

+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCodableOnboardingCompletions:(id)a0 syncProvenance:(long long)a1;
- (char)performOrJournalWithProfile:(id)a0 error:(id *)a1;

@end
