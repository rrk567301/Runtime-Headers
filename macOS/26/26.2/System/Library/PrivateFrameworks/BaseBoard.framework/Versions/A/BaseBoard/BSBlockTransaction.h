@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (void)_begin;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_canBeInterrupted;
- (id)_descriptionProem;
- (id)_graphNodeDebugName;

@end
