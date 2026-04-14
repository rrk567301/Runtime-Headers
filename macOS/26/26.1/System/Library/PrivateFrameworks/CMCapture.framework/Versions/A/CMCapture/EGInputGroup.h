@class NSDictionary, NSString, NSMutableDictionary;
@protocol EGElement, EGInputGroupHandler;

@interface EGInputGroup : NSObject <EGElement, EGNodeInput, EGInputHandler> {
    id<EGInputGroupHandler> _inputGroupHandler;
    NSMutableDictionary *_inputs;
    NSMutableDictionary *_inputDataGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _receiveLock;
}

@property (readonly, nonatomic) NSDictionary *egInputsByName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<EGElement> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)addInputsIntoArray:(id)a0;
- (void)installInput:(id)a0;
- (void)receiveData:(id)a0 fromInput:(id)a1;
- (void)setInputGroupHandler:(id)a0;

@end
