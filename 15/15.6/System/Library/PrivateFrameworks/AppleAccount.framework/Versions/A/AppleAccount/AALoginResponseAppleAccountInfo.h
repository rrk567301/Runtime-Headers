@class NSString, NSArray, NSNumber;

@interface AALoginResponseAppleAccountInfo : NSObject

@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSNumber *primaryEmailVerified;
@property (readonly, nonatomic) NSNumber *cloudDocsMigrated;
@property (readonly, nonatomic) NSNumber *notesMigrated;
@property (readonly, nonatomic) NSNumber *remindersMigrated;
@property (readonly, nonatomic) NSNumber *remindersAutoMigratableToCK;
@property (readonly, nonatomic, getter=isManagedAppleID) char managedAppleID;
@property (readonly, nonatomic, getter=isSandboxAccount) char sandboxAccount;
@property (readonly, nonatomic, getter=hasOptionalTerms) char optionalTerms;
@property (readonly, nonatomic, getter=isFamilyEligible) char familyEligible;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
