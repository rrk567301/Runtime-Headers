@class NSString, NSURL;

@interface NUScript : NSObject

@property (retain) NSString *source;
@property (readonly, nonatomic) NSURL *url;

- (id)description;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0;
- (BOOL)load:(out id *)a0;

@end
