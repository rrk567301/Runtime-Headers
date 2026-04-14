@class NSString, KTAccountPublicID, NSArray;

@interface KTVerifierResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *uri;
@property unsigned long long succeed;
@property BOOL optedIn;
@property BOOL everOptedIn;
@property BOOL recentlyOptedIn;
@property BOOL staticAccountKeyEnforced;
@property (retain) KTAccountPublicID *publicID;
@property (retain) NSArray *loggableDatas;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUri:(id)a0;

@end
