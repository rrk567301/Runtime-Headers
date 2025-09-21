@class NSObject;

@interface LiveFSGatedWork : NSObject

@property (copy) id /* block */ workBlock;
@property long long neededCount;
@property (retain) NSObject *parameter;

- (void)abort;
- (void).cxx_destruct;
- (void)approve;
- (id)initWithCount:(long long)a0 workBlock:(id /* block */)a1;

@end
