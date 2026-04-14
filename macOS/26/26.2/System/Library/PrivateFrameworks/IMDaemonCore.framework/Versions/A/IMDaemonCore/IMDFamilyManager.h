@interface IMDFamilyManager : NSObject <IMDFamilyManaging> {
    void /* unknown type, empty encoding */ processingQueue;
    void /* unknown type, empty encoding */ familyContactsNotificationToken;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)familyHandlesWithCompletion:(id /* block */)a0;

@end
