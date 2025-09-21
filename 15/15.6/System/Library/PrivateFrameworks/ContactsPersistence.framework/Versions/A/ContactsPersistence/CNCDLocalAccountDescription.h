@class NSString, NSArray, NSURL, ABCDContainer, NSNumber;

@interface CNCDLocalAccountDescription : NSObject <CNAccountDescription>

@property (readonly, copy) NSString *identifier;
@property (readonly) NSNumber *dsid;
@property (readonly) char isEnabled;
@property (readonly) char isPersistent;
@property (readonly, copy) NSURL *baseURL;
@property (readonly) NSURL *persistentStoreURL;
@property (readonly) ABCDContainer *containerRepresentation;
@property (readonly) char isChildAccount;
@property (readonly, copy) NSArray *childAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localAccountDescription;


@end
