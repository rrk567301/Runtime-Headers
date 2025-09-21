@class CSKStreamTaskOperation;

@interface CSKStreamTask : NSObject

@property (weak, nonatomic) CSKStreamTaskOperation *parentOperation;

+ (id)name;

- (id /* block */)handler;
- (void).cxx_destruct;

@end
