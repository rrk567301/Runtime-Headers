@class NSNumber;

@interface TVPAsyncPlayerDelegateOperation : NSObject

@property (readonly, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) id /* block */ block;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
