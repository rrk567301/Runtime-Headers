@class NSString;

@interface FMDRepairDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isThisDevice;
@property (readonly, nonatomic) NSString *identifier;

+ (id)objectForThisDevice;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithClientIdentifier:(id)a0 isThisDevice:(BOOL)a1;

@end
