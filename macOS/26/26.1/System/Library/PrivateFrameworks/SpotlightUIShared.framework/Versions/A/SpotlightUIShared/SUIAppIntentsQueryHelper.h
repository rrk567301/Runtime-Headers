@class NSString;

@interface SUIAppIntentsQueryHelper : NSObject <SUIAppDependency> {
    void /* unknown type, empty encoding */ searchString;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateSearchString:(NSString *)a0 completionHandler:(void (^)(void))a1;

@end
