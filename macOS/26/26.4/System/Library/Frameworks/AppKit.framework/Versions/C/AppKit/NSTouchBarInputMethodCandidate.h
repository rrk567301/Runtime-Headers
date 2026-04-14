@class NSString;

@interface NSTouchBarInputMethodCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canCacheSize;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *surface;
@property (copy, nonatomic) NSString *annotation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 annotation:(id)a1;

@end
