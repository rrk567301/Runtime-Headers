@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)_graphNodeDebugName;
- (id)_descriptionProem;

@end
