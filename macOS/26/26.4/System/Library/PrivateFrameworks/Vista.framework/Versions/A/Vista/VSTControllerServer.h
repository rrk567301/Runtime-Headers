@interface VSTControllerServer : NSObject {
    struct unique_ptr<vst::controller::Server, std::default_delete<vst::controller::Server>> { struct { struct Server *__ptr_; } ; } _server;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)connectToClient;
- (void)disconnectFromClient:(id)a0;
- (struct Reply { id x0; id x1; })processQuery:(const struct Query { id x0; id x1; id x2; } *)a0;

@end
