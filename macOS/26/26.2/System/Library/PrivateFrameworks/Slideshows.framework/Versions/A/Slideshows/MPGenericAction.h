@class NSMutableDictionary;

@interface MPGenericAction : MPAction

@property (copy, nonatomic) NSMutableDictionary *attributes;

+ (BOOL)supportsSecureCoding;
+ (id)genericAction;

- (void)setAction:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;
- (id)attributeForKey:(id)a0;

@end
