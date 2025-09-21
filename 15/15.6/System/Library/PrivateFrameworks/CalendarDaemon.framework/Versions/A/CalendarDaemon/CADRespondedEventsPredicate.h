@interface CADRespondedEventsPredicate : CADPredicate <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)predicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;

@end
