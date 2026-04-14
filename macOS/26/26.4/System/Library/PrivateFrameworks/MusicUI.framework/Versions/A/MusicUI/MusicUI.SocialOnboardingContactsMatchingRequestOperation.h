@interface MusicUI.SocialOnboardingContactsMatchingRequestOperation : MPAsyncOperation {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ matchedContacts;
    void /* unknown type, empty encoding */ shouldSortOnboardedFriends;
    void /* unknown type, empty encoding */ shouldSortNonOnboardedFriends;
    void /* unknown type, empty encoding */ _responseHandler;
}

- (void)finishWithError:(id)a0;
- (void)execute;
- (void).cxx_destruct;
- (id)init;

@end
