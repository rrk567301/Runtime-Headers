@class NSString;

@interface NSUnit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) Class _effectiveUnitClass;
@property (readonly, copy) NSString *symbol;

+ (id)new;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSymbol:(id)a0;

@end
