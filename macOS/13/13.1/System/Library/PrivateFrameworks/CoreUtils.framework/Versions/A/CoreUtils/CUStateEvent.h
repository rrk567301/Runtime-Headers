@class NSString, NSDictionary;

@interface CUStateEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)initialTransition;
+ (id)exitState;
+ (id)enterState;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 userInfo:(id)a1;

@end
