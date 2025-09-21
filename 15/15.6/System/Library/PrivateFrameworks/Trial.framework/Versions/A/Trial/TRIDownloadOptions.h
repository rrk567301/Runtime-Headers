@class NSObject;
@protocol OS_xpc_object;

@interface TRIDownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) unsigned long long requiredCapability;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) char allowsBatteryUsage;
@property (nonatomic) unsigned long long discretionaryBehavior;

+ (id)inexpensiveOptions;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)allowsExpensiveNetworkAccess;
- (id)initWithAllowsCellular:(char)a0 discretionaryBehavior:(unsigned long long)a1;
- (id)initFromPersistedBehavior:(id)a0;
- (id)initWithAllowsCellular:(char)a0 discretionaryBehavior:(unsigned long long)a1 activity:(id)a2;
- (id)serializeToPersistedBehavior;

@end
