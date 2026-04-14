@class NSString, NSError, ATXOnScreenSelectedContent;

@interface ATXAppEntityContext : NSObject {
    void /* unknown type, empty encoding */ uiContextClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchOnScreenContextFor:(NSString *)a0 completionHandler:(void (^)(ATXOnScreenSelectedContent *, NSError *))a1;

@end
