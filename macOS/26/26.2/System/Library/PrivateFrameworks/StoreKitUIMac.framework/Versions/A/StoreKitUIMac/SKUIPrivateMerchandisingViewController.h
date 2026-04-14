@class NSData, NSError;

@interface SKUIPrivateMerchandisingViewController : NSViewController {
    void /* unknown type, empty encoding */ didLoad;
    void /* unknown type, empty encoding */ remoteController;
    void /* unknown type, empty encoding */ continuation;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)displayRequest:(NSData *)a0 completion:(void (^)(NSData *, NSError *))a1;
- (void)loadRemoteController:(void (^)(NSError *))a0;

@end
