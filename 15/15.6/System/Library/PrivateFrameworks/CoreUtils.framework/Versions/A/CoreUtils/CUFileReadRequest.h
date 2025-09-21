@interface CUFileReadRequest : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long offset;

- (void).cxx_destruct;

@end
