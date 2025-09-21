@class NSString;

@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *applicationBundleIdentifierOverride;
@property (retain, nonatomic) NSString *secondarySourceApplicationBundleId;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) char allowsExpensiveNetworkAccess;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) char requiresNetworkAccess;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
