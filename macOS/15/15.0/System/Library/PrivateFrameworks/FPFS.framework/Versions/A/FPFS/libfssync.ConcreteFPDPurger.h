@interface libfssync.ConcreteFPDPurger : NSObject <FPDPurger>

- (id)init;
- (void)purgeAsyncAtUrl:(id)a0;
- (void)purgeAndWaitAtUrl:(id)a0;

@end
