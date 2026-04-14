@class IMHandle, NSString, NSArray, CNContact, NSMutableArray;

@interface IMMe : NSObject {
    NSString *_cnNickname;
    NSString *_cnFirstName;
    NSString *_cnFullName;
    NSString *_cnLastName;
    NSArray *_cnEmails;
    NSMutableArray *_cnIMHandles;
    NSMutableArray *_loginIMHandles;
}

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) CNContact *cnContact;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) IMHandle *bestIMHandle;
@property (readonly, nonatomic) NSArray *imHandles;

+ (id)me;
+ (id)fallbackUserName;
+ (id)firstNameFromFallbackUserName;
+ (id)lastNameFromFallbackUserName;
+ (id)imHandleForService:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeLoginIMHandle:(id)a0;
- (BOOL)addLoginIMHandle:(id)a0;
- (BOOL)removeIMHandle:(id)a0;
- (BOOL)addIMHandle:(id)a0;
- (void)myPictureChanged;
- (void)rebuildIMHandles;
- (void)setCNContact:(id)a0;
- (id)_imHandlesWithIDs:(id)a0 onAccount:(id)a1;
- (void)resetABPerson;
- (id)loginIMHandles;
- (BOOL)isIMHandleLoginIMHandle:(id)a0;

@end
