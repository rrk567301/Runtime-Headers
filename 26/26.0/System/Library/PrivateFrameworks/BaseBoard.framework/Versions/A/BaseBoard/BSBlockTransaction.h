@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (id)initWithBlock:(id /* block */)a0;
- (id)_descriptionProem;
- (BOOL)_canBeInterrupted;
- (id)_graphNodeDebugName;
- (void)_begin;
- (void).cxx_destruct;

@end
