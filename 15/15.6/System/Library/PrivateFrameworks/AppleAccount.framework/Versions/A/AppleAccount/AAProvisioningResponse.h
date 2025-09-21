@class NSArray, NSDictionary, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {
    NSDictionary *_icloud;
}

@property (readonly, nonatomic) NSArray *provisionedDataclasses;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSNumber *primaryEmailVerified;
@property (readonly, nonatomic) NSString *iCloudAuthToken;
@property (readonly, nonatomic) NSString *fmipAuthToken;
@property (readonly, nonatomic) NSString *fmipSiriToken;
@property (readonly, nonatomic) NSString *searchPartyToken;
@property (readonly, nonatomic) NSString *keyTransparencyToken;
@property (readonly, nonatomic) NSString *fmipAppToken;
@property (readonly, nonatomic) unsigned long long ageCategory;
@property (readonly, nonatomic) NSDictionary *regionInfo;
@property (readonly, nonatomic, getter=isManagedAppleID) char managedAppleID;
@property (readonly, nonatomic, getter=isNotesMigrated) char notesMigrated;
@property (readonly, nonatomic, getter=isRemindersMigrated) char remindersMigrated;
@property (readonly, nonatomic, getter=isRemindersAutoMigratableToCK) char remindersAutoMigratableToCK;
@property (readonly, nonatomic, getter=isSandboxAccount) char sandboxAccount;
@property (readonly, nonatomic, getter=isCloudDocsMigrated) char cloudDocsMigrated;
@property (readonly, nonatomic, getter=hasOptionalTerms) char optionalTerms;
@property (readonly, nonatomic, getter=isFamilyEligible) char familyEligible;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
