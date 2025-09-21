@class NSString, NSArray, NSURL, ABCDContainer, NSNumber;

@interface CNOnDiskAccountDescription : NSObject <CNAccountDescription>

@property (copy) NSURL *baseURL;
@property (copy) NSString *identifier;
@property char isPersistent;
@property long long type;
@property (readonly) NSNumber *dsid;
@property (readonly) char isEnabled;
@property (readonly) NSURL *persistentStoreURL;
@property (readonly) ABCDContainer *containerRepresentation;
@property (readonly) char isChildAccount;
@property (readonly, copy) NSArray *childAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)_isLocalAccount;

@end
