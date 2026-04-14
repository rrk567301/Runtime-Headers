@class NSURL;

@interface DUModification : NSObject

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) char kind;

+ (id)_modificationsWithJSONObject:(id)a0 prefixURL:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithJSONObject:(id)a0 prefixURL:(id)a1;

@end
