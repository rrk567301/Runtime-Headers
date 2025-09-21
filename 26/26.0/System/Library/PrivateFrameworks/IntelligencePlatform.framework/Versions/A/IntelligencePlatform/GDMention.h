@class NSString, GDSpan, NSArray, NSNumber;

@interface GDMention : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) GDSpan *span;
@property (readonly, copy, nonatomic) NSString *entityClass;
@property (readonly, copy, nonatomic) NSArray *entityClasses;
@property (readonly, copy, nonatomic) NSNumber *score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpan:(id)a0 entityClass:(id)a1 score:(id)a2;
- (id)initWithSpan:(id)a0 entityClasses:(id)a1 score:(id)a2;

@end
