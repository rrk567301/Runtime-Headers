@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (id)initWithBlock:(id /* block */)a0;
- (void)_begin;
- (id)_graphNodeDebugName;
- (id)_descriptionProem;
- (void).cxx_destruct;
- (BOOL)_canBeInterrupted;

@end
