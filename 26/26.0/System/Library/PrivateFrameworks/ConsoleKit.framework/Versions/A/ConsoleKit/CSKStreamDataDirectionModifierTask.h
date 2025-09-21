@class CSKStreamData;

@interface CSKStreamDataDirectionModifierTask : CSKStreamTask

@property (readonly, weak, nonatomic) CSKStreamData *data;
@property (readonly, nonatomic) unsigned long long newDirection;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)name;

- (id /* block */)handler;
- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 direction:(unsigned long long)a1;

@end
