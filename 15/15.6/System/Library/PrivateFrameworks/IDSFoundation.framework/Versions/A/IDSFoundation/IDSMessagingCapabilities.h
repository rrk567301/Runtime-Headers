@class NSSet;

@interface IDSMessagingCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSSet *requiredCapabilities;
@property (retain, nonatomic) NSSet *requiredMissingCapabilities;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequiredCapabilities:(id)a0 requiredMissingCapabilities:(id)a1;

@end
