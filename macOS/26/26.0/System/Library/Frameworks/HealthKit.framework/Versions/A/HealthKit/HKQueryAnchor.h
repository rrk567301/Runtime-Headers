@class NSString;

@interface HKQueryAnchor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, getter=_clientToken, setter=_setClientToken:) NSString *clientToken;
@property (readonly, nonatomic, getter=_rowid) long long rowid;

+ (id)anchorFromValue:(unsigned long long)a0;
+ (id)_anchorWithRowid:(long long)a0;
+ (id)latestAnchor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void)_setRowid:(long long)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
