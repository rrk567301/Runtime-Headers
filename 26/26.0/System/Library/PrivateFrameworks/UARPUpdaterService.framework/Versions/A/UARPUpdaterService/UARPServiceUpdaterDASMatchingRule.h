@class NSString, NSDictionary;

@interface UARPServiceUpdaterDASMatchingRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *matchingDictionary;

- (void)dealloc;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 matchingDictionary:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
