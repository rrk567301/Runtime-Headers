@class NSString, SCROutputAction;

@interface SCROutputSound : NSObject

@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) id owner;
@property (retain, nonatomic) SCROutputAction *action;
@property (copy, nonatomic) NSString *category;

- (void).cxx_destruct;

@end
