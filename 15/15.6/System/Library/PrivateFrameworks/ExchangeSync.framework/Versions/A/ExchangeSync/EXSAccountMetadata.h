@class NSString;

@interface EXSAccountMetadata : NSObject

@property long long accountID;
@property unsigned long long enabledDataclasses;
@property (retain) NSString *accountKey;
@property (retain) NSString *sourceIdentifier;
@property char isDelegate;
@property char readOnly;
@property (retain) NSString *delegateEmail;
@property (retain) NSString *delegateFullname;

+ (unsigned long long)enabledDataclassesWithACAccount:(id)a0;

- (void).cxx_destruct;
- (char)isEqualToMetadata:(id)a0;
- (void)updateWithACAccount:(id)a0;
- (void)updateWithACAccount:(id)a0 delegateKey:(id)a1 email:(id)a2 fullName:(id)a3 readOnly:(char)a4;

@end
