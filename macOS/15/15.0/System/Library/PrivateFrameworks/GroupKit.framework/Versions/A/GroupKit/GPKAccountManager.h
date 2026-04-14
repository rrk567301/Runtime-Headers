@class NSArray, NSString, NSError;

@interface GPKAccountManager : NSObject {
    void /* unknown type, empty encoding */ daemonMessageSender;
}

@property (class, nonatomic, readonly) GPKAccountManager *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)fetchAllAccountHandlesAndReturnError:(void (^)(NSArray *, NSError *))a0;
- (void)fetchPreferredHandleAndReturnError:(void (^)(NSString *, NSError *))a0;
- (void)setPreferredHandle:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;

@end
