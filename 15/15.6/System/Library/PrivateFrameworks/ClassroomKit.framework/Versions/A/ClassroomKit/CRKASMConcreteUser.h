@class NSString, NSDate;
@protocol CRKClassKitPerson, CRKASMNameComponents;

@interface CRKASMConcreteUser : NSObject <CRKASMUser>

@property (readonly, nonatomic) id<CRKClassKitPerson> backingPerson;
@property (readonly, nonatomic) NSDate *backingPersonInitialModificationDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, nonatomic, getter=isFederated) char federated;
@property (readonly, nonatomic) id<CRKASMNameComponents> nameComponents;
@property (readonly, nonatomic, getter=isAccountLockedDueToFailedLoginAttempts) char accountLockedDueToFailedLoginAttempts;
@property (readonly, nonatomic, getter=isAccountATOLocked) char accountATOLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBackingPerson:(id)a0;
- (char)isEqualToConcreteUser:(id)a0;

@end
