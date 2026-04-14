@class NSString;

@interface _SFEnhancedContextualString : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSString *tagName;
@property (readonly, nonatomic) BOOL isLoggable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0 tagName:(id)a1 isLoggable:(BOOL)a2;

@end
