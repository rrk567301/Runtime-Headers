@class NSString, NSError, ATXOnScreenSelectedContent;

@interface ATXAppEntityContext : NSObject {
    void /* unknown type, empty encoding */ uiContextClient;
}

- (void).cxx_destruct;
- (id)init;
- (void)fetchOnScreenContextFor:(NSString *)a0 completionHandler:(void (^)(ATXOnScreenSelectedContent *, NSError *))a1;

@end
