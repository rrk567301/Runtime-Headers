@class NSArray, NSString;

@interface BMAccessDelegate : NSObject <BMAccessDelegate>

@property (readonly, nonatomic) NSArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegates:(id)a0;
- (BOOL)prepareResource:(id)a0 withMode:(unsigned long long)a1;

@end
