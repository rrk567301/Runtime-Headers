@class NSString, NSNumber, NSURL;

@interface DMFInstallManagedBookRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *originator;
@property (copy, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) unsigned long long type;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
