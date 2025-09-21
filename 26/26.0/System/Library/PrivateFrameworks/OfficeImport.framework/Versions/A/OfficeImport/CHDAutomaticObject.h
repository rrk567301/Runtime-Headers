@class NSString;

@interface CHDAutomaticObject : NSObject {
    NSString *mName;
}

+ (id)automaticStroke;
+ (id)automaticEffects;
+ (id)automaticFill;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
