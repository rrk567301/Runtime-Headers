@class NSString, NSArray, NSError;

@interface ATXMenuItemContext : NSObject {
    void /* unknown type, empty encoding */ uiContextClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)retrieveMenuItemsFor:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;

@end
