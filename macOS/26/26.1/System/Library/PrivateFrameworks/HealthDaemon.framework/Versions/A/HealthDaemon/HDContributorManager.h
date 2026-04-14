@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (id)contributorForReference:(id)a0 error:(id *)a1;
- (id)defaultContributorReference;
- (id)_primaryAppleAccount;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)_imPreferredAccount;
- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
