@class NSArray;

@interface WBSAutoFillJavaScriptProvider : NSObject

@property (class, readonly, nonatomic) WBSAutoFillJavaScriptProvider *sharedProvider;

@property (readonly, nonatomic) NSArray *javaScriptStringsToInject;

- (id)_autoFillKeywords;

@end
