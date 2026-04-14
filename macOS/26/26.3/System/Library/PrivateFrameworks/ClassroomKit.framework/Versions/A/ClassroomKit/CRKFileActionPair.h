@class NSURL;

@interface CRKFileActionPair : NSObject

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *destinationURL;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;

@end
