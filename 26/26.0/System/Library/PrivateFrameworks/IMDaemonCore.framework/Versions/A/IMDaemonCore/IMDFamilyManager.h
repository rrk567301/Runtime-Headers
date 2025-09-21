@interface IMDFamilyManager : NSObject <IMDFamilyManaging> {
    void /* unknown type, empty encoding */ processingQueue;
    void /* unknown type, empty encoding */ familyContactsNotificationToken;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)familyHandlesWithCompletion:(id /* block */)a0;

@end
