@class NSArray, WLKContinueWatchingCollection;

@interface WLKContinueWatchingResponse : NSObject

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) WLKContinueWatchingCollection *featured;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
