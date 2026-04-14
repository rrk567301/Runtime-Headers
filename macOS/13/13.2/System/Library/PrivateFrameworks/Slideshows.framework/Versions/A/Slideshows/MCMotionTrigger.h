@class NSString;

@interface MCMotionTrigger : MCAction

@property (copy) NSString *key;
@property (nonatomic) double duration;
@property (nonatomic) double easeIn;
@property (nonatomic) double easeOut;

+ (id)motionTriggerForTargetPlugObjectID:(id)a0 withKey:(id)a1 andDuration:(double)a2;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;

@end
