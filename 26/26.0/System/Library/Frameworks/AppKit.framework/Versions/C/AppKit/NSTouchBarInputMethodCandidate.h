@class NSString;

@interface NSTouchBarInputMethodCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canCacheSize;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *surface;
@property (copy, nonatomic) NSString *annotation;

- (id)initWithTitle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 annotation:(id)a1;

@end
