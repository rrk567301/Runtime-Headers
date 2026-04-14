@class NSURL, NSNumber;

@interface XProtectUpdateBundle : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSNumber *version;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)getResource:(id)a0;

@end
