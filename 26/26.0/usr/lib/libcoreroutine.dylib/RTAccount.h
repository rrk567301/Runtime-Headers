@class NSString, NSArray;

@interface RTAccount : NSObject

@property (retain, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) BOOL primaryEmailVerified;
@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *primaryEmail;
@property (retain, nonatomic) NSString *appleIDAlias;
@property (retain, nonatomic) NSArray *appleIDAliases;
@property (nonatomic) BOOL underageAccount;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)appleIDs;
- (id)initWithACAccount:(id)a0 underageAccount:(BOOL)a1;

@end
