@class NSString;

@interface FMDRepairDevice : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isThisDevice;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientIdentifier:(id)a0 isThisDevice:(char)a1;

@end
