@class LNDialog, NSArray, NSString, NSData;

@interface LNNLGDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *securityScopeData;
@property (readonly, copy, nonatomic) NSArray *nlgParams;
@property (readonly, copy, nonatomic) NSString *options;
@property (readonly, copy, nonatomic) LNDialog *fallbackDialog;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNLGParams:(id)a0 options:(id)a1 fallbackDialog:(id)a2 localeIdentifier:(id)a3;

@end
