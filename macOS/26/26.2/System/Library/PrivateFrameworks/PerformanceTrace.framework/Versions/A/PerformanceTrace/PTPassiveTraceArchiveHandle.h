@class NSString;

@interface PTPassiveTraceArchiveHandle : NSObject

@property (readonly, nonatomic) long long sandboxToken;
@property (readonly, nonatomic) NSString *aarPath;

- (void).cxx_destruct;

@end
