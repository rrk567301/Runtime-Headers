@class NSString, NSError, STKSticker;

@interface _STKImageGlyphRecencyObjCFacade : NSObject {
    void /* unknown type, empty encoding */ recency;
}

- (id)init;
- (void).cxx_destruct;
- (void)didUseEmoji:(NSString *)a0 completionHandler:(void (^)(double, NSError *))a1;
- (void)resetRecentsWithCompletionHandler:(void (^)(NSError *))a0;
- (void)didUseSticker:(STKSticker *)a0 completionHandler:(void (^)(double, NSError *))a1;

@end
