@class NSView, NSMutableDictionary;
@protocol NSTextInputClient;

@interface NSInlinePredictionContext : NSObject

@property (retain, nonatomic) NSView *view;
@property (nonatomic) id<NSTextInputClient> client;
@property (retain, nonatomic) NSMutableDictionary *resultDictionary;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)dealloc;

@end
