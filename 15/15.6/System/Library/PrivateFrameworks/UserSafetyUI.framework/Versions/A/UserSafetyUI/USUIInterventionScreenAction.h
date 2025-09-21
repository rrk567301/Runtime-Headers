@class NSString;

@interface USUIInterventionScreenAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) char primary;
@property (nonatomic) long long actionID;

+ (id)action:(id)a0 primary:(char)a1 actionID:(long long)a2;

- (void).cxx_destruct;

@end
