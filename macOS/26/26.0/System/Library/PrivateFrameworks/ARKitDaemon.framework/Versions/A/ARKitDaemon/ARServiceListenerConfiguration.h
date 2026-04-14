@class NSArray;

@interface ARServiceListenerConfiguration : NSObject

@property (retain) NSArray *didRemoveServiceListeners;
@property (retain) NSArray *didAddServiceListeners;

- (id)init;
- (void).cxx_destruct;

@end
