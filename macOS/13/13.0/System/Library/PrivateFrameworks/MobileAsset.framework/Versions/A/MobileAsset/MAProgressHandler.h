@class NSMutableArray;

@interface MAProgressHandler : NSObject

@property (nonatomic) unsigned long long notificationInterval;
@property (readonly, nonatomic) NSMutableArray *callBackArray;

- (void).cxx_destruct;
- (id)initWithCallBack:(id /* block */)a0;
- (void)addCallBack:(id /* block */)a0;

@end
