@class NSString, NSManagedObjectID;

@interface CalDelegateUserInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *uri;
@property (retain) NSString *commonName;
@property (retain) NSString *displayString;
@property (retain) NSString *preferredUserAddress;
@property (retain) NSManagedObjectID *managedObjectID;
@property int calendarsPermission;
@property int tasksPermission;
@property BOOL alarmsEnabled;

+ (id)infoWithCalDAVDetails:(id)a0 allowWrite:(BOOL)a1;
+ (id)delegatesForCalManagedCalDAVPrincipal:(id)a0;
+ (void)makeDisplayNamesUnique:(id)a0;
+ (id)matchingDelegate:(id)a0 inArray:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)caseInsensitiveCompare:(id)a0;
- (void)setAllowWrite:(BOOL)a0;
- (void)_setValuesWithCalManagedPrincipal:(id)a0;
- (id)initWithURI:(id)a0 commonName:(id)a1 calendarsPermission:(int)a2 tasksPermission:(int)a3;
- (id)initWithURI:(id)a0 commonName:(id)a1 permission:(int)a2;
- (id)initWithURI:(id)a0 commonName:(id)a1 allowWrite:(BOOL)a2;
- (id)initWithCalManagedCalDAVPrincipal:(id)a0;
- (id)initWithCalManagedExchangePrincipal:(id)a0;
- (BOOL)allowWrite;

@end
