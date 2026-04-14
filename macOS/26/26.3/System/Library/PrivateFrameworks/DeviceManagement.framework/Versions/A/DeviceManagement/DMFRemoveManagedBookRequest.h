@class NSNumber, NSString;

@interface DMFRemoveManagedBookRequest : DMFTaskRequest

@property (copy, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *persistentID;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
