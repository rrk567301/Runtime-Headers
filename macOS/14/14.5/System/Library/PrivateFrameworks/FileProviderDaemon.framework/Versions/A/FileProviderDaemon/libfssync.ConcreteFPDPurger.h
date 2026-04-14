@interface libfssync.ConcreteFPDPurger : NSObject <FPDPurger>

- (void)purgeAndWaitAtUrl:(id)a0;
- (void)purgeAsyncAtUrl:(id)a0;
- (id)init;

@end
