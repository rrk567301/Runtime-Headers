@class NSString;

@interface MCAnimationPath : MCObjectLight {
    BOOL mIsSnapshot;
}

@property (copy) NSString *key;
@property (nonatomic) BOOL isTriggered;

+ (id)animationPathWithKey:(id)a0;

- (BOOL)isSnapshot;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;

@end
