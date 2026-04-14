@class NSString;

@interface SWTransparencyOperationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *name;
@property long long qualityOfService;
@property double timeout;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
