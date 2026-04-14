@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (id)_graphNodeDebugName;
- (void)_begin;
- (id)initWithBlock:(id /* block */)a0;
- (id)_descriptionProem;
- (BOOL)_canBeInterrupted;
- (void).cxx_destruct;

@end
