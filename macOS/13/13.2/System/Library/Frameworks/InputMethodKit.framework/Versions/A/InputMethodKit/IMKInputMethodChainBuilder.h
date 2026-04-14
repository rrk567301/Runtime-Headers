@class NSArray, NSMutableArray;
@protocol IMKInputMethod, IMKChainable;

@interface IMKInputMethodChainBuilder : NSObject {
    NSMutableArray *_chainClasses;
    id<IMKInputMethod, IMKChainable> _terminus;
    id<IMKInputMethod, IMKChainable> _chain;
    NSArray *_chainMembers;
}

@property (readonly, nonatomic) id<IMKInputMethod, IMKChainable> inputMethod;
@property (readonly, nonatomic) NSArray *inputMethods;
@property (nonatomic) id /* block */ configureChain;

- (id)initWithTerminus:(id)a0;
- (id)initWithTerminus:(id)a0 forChain:(id)a1;
- (id)_buildChain;
- (id)_extractChainMembers;
- (void)addInputMethodClassToChain:(Class)a0;

@end
