@class NSString;

@interface USUIMoreHelpMenuAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) char destructive;
@property (nonatomic) long long actionID;

+ (id)action:(id)a0 destructive:(char)a1 actionID:(long long)a2;

- (void).cxx_destruct;

@end
