@class ATXWidgetClientIdentity, NSNumber, NSArray;

@interface ATXWidgetSmartStackRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXWidgetClientIdentity *clientIdentity;
@property (nonatomic) unsigned long long smartStackVariant;
@property (retain, nonatomic) NSNumber *numberOfStacks;
@property (retain, nonatomic) NSNumber *maximumWidgetsPerStack;
@property (copy, nonatomic) NSArray *denyListOfExtensions;

- (id)initWithClientIdentity:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
