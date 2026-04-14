@class NSMutableDictionary;

@interface MPGenericAction : MPAction

@property (copy, nonatomic) NSMutableDictionary *attributes;

+ (BOOL)supportsSecureCoding;
+ (id)genericAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAction:(id)a0;
- (id)attributeForKey:(id)a0;

@end
