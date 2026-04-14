@class NSData, NSString, LNStaticDeferredLocalizedString;

@interface LNNLGRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *securityScopeData;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *format;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(id)a0 title:(id)a1 value:(id)a2 format:(id)a3;

@end
