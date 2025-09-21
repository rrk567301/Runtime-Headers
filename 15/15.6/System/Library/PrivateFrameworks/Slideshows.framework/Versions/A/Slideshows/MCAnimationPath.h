@class NSString;

@interface MCAnimationPath : MCObjectLight {
    char mIsSnapshot;
}

@property (copy) NSString *key;
@property (nonatomic) char isTriggered;

+ (id)animationPathWithKey:(id)a0;

- (char)isSnapshot;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
