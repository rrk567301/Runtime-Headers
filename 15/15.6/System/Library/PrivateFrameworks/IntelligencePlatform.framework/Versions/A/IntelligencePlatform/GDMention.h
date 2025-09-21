@class NSString, GDSpan, NSArray, NSNumber;

@interface GDMention : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) GDSpan *span;
@property (readonly, copy, nonatomic) NSString *entityClass;
@property (readonly, copy, nonatomic) NSArray *entityClasses;
@property (readonly, copy, nonatomic) NSNumber *score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpan:(id)a0 entityClass:(id)a1 score:(id)a2;
- (id)initWithSpan:(id)a0 entityClasses:(id)a1 score:(id)a2;

@end
