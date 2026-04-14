@interface UnifiedFieldTransientUIAction : NSObject

@property (copy, nonatomic) id /* block */ show;
@property (copy, nonatomic) id /* block */ hide;
@property (nonatomic) double duration;
@property (nonatomic) BOOL cancelled;

- (void).cxx_destruct;

@end
