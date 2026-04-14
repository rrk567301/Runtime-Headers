@class NSString, NSDictionary;

@interface UARPServiceUpdaterAccessoryMatchingRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSString *xpcEventStream;
@property (readonly) NSDictionary *matchingDictionary;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (const char *)transportDescription;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 xpcEventStream:(id)a1 matchingDictionary:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
