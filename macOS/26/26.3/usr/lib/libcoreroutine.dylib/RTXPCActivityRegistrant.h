@class NSString, RTXPCActivityCriteria;

@interface RTXPCActivityRegistrant : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) RTXPCActivityCriteria *criteria;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) id /* block */ deferHandler;
@property (nonatomic) BOOL didInvokeDeferHandler;

- (id)initWithIdentifier:(id)a0 criteria:(id)a1 handler:(id /* block */)a2 deferHandler:(id /* block */)a3;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
