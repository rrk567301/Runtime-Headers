@class NSData;

@interface CUFileWriteRequest : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long offset;

- (void).cxx_destruct;

@end
