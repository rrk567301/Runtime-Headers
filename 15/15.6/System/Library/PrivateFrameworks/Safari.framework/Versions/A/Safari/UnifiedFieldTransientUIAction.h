@class NSString;

@interface UnifiedFieldTransientUIAction : NSObject

@property (copy, nonatomic) id /* block */ show;
@property (copy, nonatomic) id /* block */ hide;
@property (nonatomic) double duration;
@property (nonatomic) char cancelled;
@property (copy, nonatomic) NSString *actionText;
@property (copy, nonatomic) id /* block */ presentBaseAssistantIcon;

- (void).cxx_destruct;

@end
