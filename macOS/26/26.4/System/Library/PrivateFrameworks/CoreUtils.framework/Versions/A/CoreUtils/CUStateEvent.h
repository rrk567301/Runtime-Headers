@class NSString, NSDictionary;

@interface CUStateEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)initialTransition;
+ (id)enterState;
+ (id)exitState;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (void)dealloc;

@end
