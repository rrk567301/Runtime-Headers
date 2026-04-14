@class NSArray;

@interface ARServiceListenerConfiguration : NSObject

@property (retain) NSArray *didRemoveServiceListeners;
@property (retain) NSArray *didAddServiceListeners;

- (void).cxx_destruct;
- (id)init;

@end
