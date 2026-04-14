@class NSString;

@interface _SFEnhancedContextualString : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSString *tagName;
@property (readonly, nonatomic) BOOL isLoggable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 tagName:(id)a1 isLoggable:(BOOL)a2;

@end
