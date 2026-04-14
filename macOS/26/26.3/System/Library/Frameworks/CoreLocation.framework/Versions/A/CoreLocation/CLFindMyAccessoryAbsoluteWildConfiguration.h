@class NSDate;

@interface CLFindMyAccessoryAbsoluteWildConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *desiredKeyRollDate;
@property (readonly) unsigned int nextWildIndex;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)encodeConfiguration;
- (id)initWithDesiredNextKeyRollDate:(id)a0 nextWildIndex:(unsigned int)a1;

@end
