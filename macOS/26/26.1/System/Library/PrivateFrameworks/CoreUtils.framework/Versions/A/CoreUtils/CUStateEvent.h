@class NSString, NSDictionary;

@interface CUStateEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)exitState;
+ (id)enterState;
+ (id)initialTransition;

- (id)initWithName:(id)a0 userInfo:(id)a1;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;

@end
