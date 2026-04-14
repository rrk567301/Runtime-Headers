@class NSString, NSArray, NSError;

@interface ATXMenuItemContext : NSObject {
    void /* unknown type, empty encoding */ uiContextClient;
}

- (void).cxx_destruct;
- (id)init;
- (void)retrieveMenuItemsFor:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;

@end
