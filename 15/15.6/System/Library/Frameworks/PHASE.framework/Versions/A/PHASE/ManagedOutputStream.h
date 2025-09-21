@class NSUUID, PHASEExternalOutputStreamDefinition;

@interface ManagedOutputStream : NSObject

@property (nonatomic, getter=isStreamPaused) char streamPaused;
@property (nonatomic, getter=isControllerPaused) char controllerPaused;
@property (retain, nonatomic) PHASEExternalOutputStreamDefinition *definition;
@property (copy, nonatomic) id /* block */ renderBlock;
@property (retain, nonatomic) NSUUID *attributedClientID;

- (void).cxx_destruct;
- (id)initWithPaused:(char)a0 attributedTo:(id)a1 definition:(id)a2 renderBlock:(id /* block */)a3;

@end
