@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (id)defaultContributorReference;
- (id)_primaryAppleAccount;
- (id)contributorForReference:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)_imPreferredAccount;
- (id)initWithProfile:(id)a0;

@end
