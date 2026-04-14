@class NSString, NSMorphology;

@interface NSMorphologyPronoun : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *pronoun;
@property (readonly, copy) NSMorphology *morphology;
@property (readonly, copy) NSMorphology *dependentMorphology;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_morphunConstraints;
- (id)initWithPronoun:(id)a0 morphology:(id)a1 dependentMorphology:(id)a2;

@end
