@class NSObject;
@protocol OS_xpc_object;

@interface TRIDownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) unsigned long long requiredCapability;
@property (nonatomic) BOOL boostPriority;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsBatteryUsage;
@property (nonatomic) unsigned long long discretionaryBehavior;

+ (id)inexpensiveOptions;

- (BOOL)allowsExpensiveNetworkAccess;
- (id)initWithAllowsCellular:(BOOL)a0 discretionaryBehavior:(unsigned long long)a1;
- (id)initWithAllowsCellular:(BOOL)a0 discretionaryBehavior:(unsigned long long)a1 activity:(id)a2;
- (id)serializeToPersistedBehavior;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initFromPersistedBehavior:(id)a0;
- (id)initWithAllowsCellular:(BOOL)a0 discretionaryBehavior:(unsigned long long)a1 boostPriority:(BOOL)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
