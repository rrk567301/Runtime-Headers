@class NSString;

@interface UVCExtensionStateMachineEvent : NSObject

@property (readonly) NSString *name;
@property (readonly) BOOL isEntry;
@property (readonly) id /* block */ action;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 isEntry:(BOOL)a1 eventAction:(id /* block */)a2;

@end
