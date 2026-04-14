@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (id)initWithBlock:(id /* block */)a0;
- (id)_graphNodeDebugName;
- (void).cxx_destruct;
- (id)_descriptionProem;
- (void)_begin;
- (BOOL)_canBeInterrupted;

@end
