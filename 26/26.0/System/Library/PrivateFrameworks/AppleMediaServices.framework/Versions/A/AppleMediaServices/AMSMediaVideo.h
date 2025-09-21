@class NSURL, NSDictionary;

@interface AMSMediaVideo : NSObject

@property (readonly) NSURL *URL;
@property (readonly, copy) NSDictionary *videoDictionary;

- (id)initWithDictionary:(id)a0;
- (id)name;
- (void).cxx_destruct;

@end
