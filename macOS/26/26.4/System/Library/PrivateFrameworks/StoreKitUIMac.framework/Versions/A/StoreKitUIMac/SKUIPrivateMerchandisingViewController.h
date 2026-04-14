@class NSData, NSError;

@interface SKUIPrivateMerchandisingViewController : NSViewController {
    void /* unknown type, empty encoding */ didLoad;
    void /* unknown type, empty encoding */ remoteController;
    void /* unknown type, empty encoding */ continuation;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)displayRequest:(NSData *)a0 completion:(void (^)(NSData *, NSError *))a1;
- (void)loadRemoteController:(void (^)(NSError *))a0;

@end
