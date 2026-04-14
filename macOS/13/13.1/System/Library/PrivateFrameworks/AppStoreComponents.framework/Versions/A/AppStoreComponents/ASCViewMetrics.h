@class NSArray, NSDictionary;

@interface ASCViewMetrics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *instructions;
@property (readonly, copy, nonatomic) NSDictionary *pageFields;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInstructions:(id)a0 pageFields:(id)a1;
- (id)dataForInvocationPoint:(id)a0;

@end
