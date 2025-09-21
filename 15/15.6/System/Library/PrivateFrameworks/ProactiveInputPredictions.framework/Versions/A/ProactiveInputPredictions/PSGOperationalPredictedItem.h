@class NSString, NSDictionary;

@interface PSGOperationalPredictedItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *operationData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToItem:(id)a0;
- (id)initWithItemIdentifier:(id)a0 value:(id)a1 bundleIdentifier:(id)a2 operationData:(id)a3;

@end
