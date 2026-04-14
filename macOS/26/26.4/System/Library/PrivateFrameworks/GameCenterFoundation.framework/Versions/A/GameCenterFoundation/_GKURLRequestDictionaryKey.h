@class NSURLRequest;

@interface _GKURLRequestDictionaryKey : NSObject <NSCopying>

@property (retain, nonatomic) NSURLRequest *request;

+ (id)keyWithRequest:(id)a0;

- (id)initWithRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
