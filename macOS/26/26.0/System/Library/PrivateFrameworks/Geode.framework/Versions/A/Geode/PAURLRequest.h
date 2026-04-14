@class NSURL, NSDictionary, NSString;

@interface PAURLRequest : PAImageRequest

@property (copy) NSURL *url;
@property (copy) NSDictionary *options;
@property (copy) NSString *uti;

- (id)initWithURL:(id)a0 options:(id)a1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)submitSynchronous:(id)a0;

@end
