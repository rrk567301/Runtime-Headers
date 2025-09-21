@class NSNumber;

@interface TVPAsyncPlayerDelegateOperation : NSObject

@property (readonly, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) id /* block */ block;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
