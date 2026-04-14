@class NSString;
@protocol NSObject;

@interface AMSBagKeyInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bagKey;
@property (readonly) id<NSObject> defaultValue;
@property (readonly) unsigned long long valueType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;
- (id)initWithBagKey:(id)a0 valueType:(unsigned long long)a1;

@end
