@class NSString;
@protocol EGSourcePort, EGPortInterface, EGElement, EGInputHandler;

@interface EGInput : NSObject <EGElement, EGNodeInput, EGInputPort> {
    id<EGInputHandler> _inputHandler;
    id<EGSourcePort> _source;
    id<EGPortInterface> _portInterface;
}

@property (readonly, nonatomic) id<EGPortInterface> portInterface;
@property (readonly, nonatomic) id<EGSourcePort> source;
@property (readonly, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<EGElement> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)setInputHandler:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)handleData:(id)a0;
- (void)registerSource:(id)a0;
- (void)addDownstreamNodeInputPortsIntoArray:(id)a0;
- (void)addInputsIntoArray:(id)a0;
- (void)receiveData:(id)a0;
- (void)setPortInterface:(id)a0;

@end
