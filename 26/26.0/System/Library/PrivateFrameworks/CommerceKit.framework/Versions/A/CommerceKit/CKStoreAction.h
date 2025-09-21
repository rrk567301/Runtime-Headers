@class NSDictionary;

@interface CKStoreAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char action;
@property (readonly, nonatomic) NSDictionary *actionParameters;

+ (id)_actionFromResponseDictionary:(id)a0;
+ (id)stringForActionType:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAction:(unsigned char)a0 parameters:(id)a1;

@end
