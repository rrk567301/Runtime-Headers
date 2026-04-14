@class NSString, NSDictionary;

@interface UARPServiceUpdaterDASMatchingRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *matchingDictionary;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)dumpWithTabDepth:(unsigned long long)a0 dumpString:(id)a1;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 matchingDictionary:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
