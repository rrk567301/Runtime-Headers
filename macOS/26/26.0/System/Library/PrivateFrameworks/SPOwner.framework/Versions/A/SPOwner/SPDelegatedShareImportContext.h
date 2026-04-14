@class NSString;

@interface SPDelegatedShareImportContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *inputUrl;
@property (readonly, copy, nonatomic) NSString *callbackValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0;
- (id)initWithUrl:(id)a0 callbackValue:(id)a1;

@end
