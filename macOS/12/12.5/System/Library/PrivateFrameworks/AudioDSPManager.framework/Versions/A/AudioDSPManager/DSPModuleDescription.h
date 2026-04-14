@class NSArray, DSPModuleBasicDescription;

@interface DSPModuleDescription : NSObject

@property (readonly, nonatomic) DSPModuleBasicDescription *basicDescription;
@property (readonly, nonatomic) NSArray *controlDescriptions;

- (void).cxx_destruct;
- (id)initWithBasicDescription:(id)a0 controlDescriptions:(id)a1;

@end
