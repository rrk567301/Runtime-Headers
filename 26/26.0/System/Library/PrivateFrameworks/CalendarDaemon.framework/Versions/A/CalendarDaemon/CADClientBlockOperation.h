@class NSString;

@interface CADClientBlockOperation : NSBlockOperation <CADClientOperation>

@property (readonly, nonatomic) unsigned int token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blockOperationWithToken:(unsigned int)a0 block:(id /* block */)a1;

- (id)initWithToken:(unsigned int)a0;

@end
