@class NSString;

@interface APSafeFileURL : NSURL

@property (copy, nonatomic) NSString *safeDescription;

- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)URLByAppendingPathComponent:(id)a0;
- (id)initFileURLWithPath:(id)a0 relativeToURL:(id)a1;

@end
