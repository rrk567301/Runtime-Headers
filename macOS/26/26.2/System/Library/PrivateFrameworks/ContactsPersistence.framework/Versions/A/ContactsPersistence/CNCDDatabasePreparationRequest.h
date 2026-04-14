@class NSURL;
@protocol CNCDIOSLegacyIdentifierRegistration;

@interface CNCDDatabasePreparationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly) id<CNCDIOSLegacyIdentifierRegistration> registrar;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 registrar:(id)a2;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1;
- (id)preparationRequestUsingRegistrar:(id)a0;

@end
