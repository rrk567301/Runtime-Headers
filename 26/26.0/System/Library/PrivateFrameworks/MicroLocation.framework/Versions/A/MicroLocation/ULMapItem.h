@class NSString, NSArray;

@interface ULMapItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSString *mapItemType;
@property (retain, nonatomic) NSString *contextLayer;

+ (BOOL)_verifyInput:(id)a0;
+ (BOOL)_verifyInput:(id)a0 labels:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)contextLayerEnum;
- (id)initWithName:(id)a0 labels:(id)a1 mapItemType:(id)a2;

@end
