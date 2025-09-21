@class NSString;

@interface UVCExtensionStateMachineEvent : NSObject

@property (readonly) NSString *name;
@property (readonly) char isEntry;
@property (readonly) id /* block */ action;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 isEntry:(char)a1 eventAction:(id /* block */)a2;

@end
