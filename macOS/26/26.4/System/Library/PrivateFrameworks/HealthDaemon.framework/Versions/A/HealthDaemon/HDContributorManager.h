@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)contributorForReference:(id)a0 error:(id *)a1;
- (id)_primaryAppleAccount;
- (void).cxx_destruct;
- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)_imPreferredAccount;
- (id)defaultContributorReference;

@end
