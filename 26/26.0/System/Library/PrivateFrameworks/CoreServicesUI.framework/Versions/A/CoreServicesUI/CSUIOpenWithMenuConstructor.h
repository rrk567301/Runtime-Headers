@protocol CSUIOpenWithMenuConstructorDelegate;

@interface CSUIOpenWithMenuConstructor : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ mutableState;
}

@property (nonatomic, weak) id<CSUIOpenWithMenuConstructorDelegate> delegate;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)prepareMenuForBindable:(id)a0 error:(id *)a1;
- (id)prepareMenuForBindables:(id)a0 error:(id *)a1;

@end
