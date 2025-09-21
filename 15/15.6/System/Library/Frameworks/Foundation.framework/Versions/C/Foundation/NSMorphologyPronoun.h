@class NSString, NSMorphology;

@interface NSMorphologyPronoun : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *pronoun;
@property (readonly, copy) NSMorphology *morphology;
@property (readonly, copy) NSMorphology *dependentMorphology;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_morphunConstraints;
- (id)initWithPronoun:(id)a0 morphology:(id)a1 dependentMorphology:(id)a2;

@end
