@class NSArray, SCRElement, NSString;

@interface SCRAIMapsAdapter : NSObject

+ (void)describeMapsWithElements:(NSArray *)a0 focusedElement:(SCRElement *)a1 completionHandler:(void (^)(NSString *))a2;
+ (id)finalMapFeatureTypeString:(long long)a0 isFocused:(BOOL)a1;
+ (id)mapFeatureTypeString:(long long)a0;

- (id)init;

@end
