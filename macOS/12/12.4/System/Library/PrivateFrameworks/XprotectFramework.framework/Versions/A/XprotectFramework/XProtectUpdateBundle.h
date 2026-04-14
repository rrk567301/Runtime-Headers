@class NSURL, NSNumber;

@interface XProtectUpdateBundle : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSNumber *version;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)getResource:(id)a0;

@end
