@class NSDictionary;

@interface IKSFEffectDescription : NSObject {
    NSDictionary *_description;
}

+ (void)initialize;
+ (void)addEffectWithDictionary:(id)a0;
+ (id)effectDescriptionWithDictionary:(id)a0;
+ (id)effectNamed:(id)a0;
+ (id)effectNames;

- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)descriptionDictionary;
- (void)setDescription:(id)a0;
- (id)initFromDictionary:(id)a0;
- (id)parameterAtIndex:(int)a0;
- (id)ciName;
- (id)ciIdentifier;
- (BOOL)isInUserDomain;
- (int)numberOfParameters;
- (id)nameForParameter:(int)a0;
- (id)minValueForParameter:(int)a0;
- (id)maxValueForParameter:(int)a0;
- (id)defaultValueForParameter:(int)a0;
- (BOOL)invertValueForParameter:(int)a0;
- (BOOL)isParameterEditable:(int)a0;
- (float)yPosition;

@end
