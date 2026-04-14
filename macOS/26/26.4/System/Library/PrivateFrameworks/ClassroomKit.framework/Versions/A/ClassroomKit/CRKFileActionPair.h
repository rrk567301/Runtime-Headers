@class NSURL;

@interface CRKFileActionPair : NSObject

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *destinationURL;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;

@end
