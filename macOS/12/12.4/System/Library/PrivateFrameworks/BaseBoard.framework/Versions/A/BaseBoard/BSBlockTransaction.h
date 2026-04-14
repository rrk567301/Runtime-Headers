@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)_descriptionProem;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (id)_graphNodeDebugName;

@end
