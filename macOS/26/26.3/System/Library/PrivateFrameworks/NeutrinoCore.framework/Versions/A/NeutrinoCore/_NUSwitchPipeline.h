@class _NUChannelPort;

@interface _NUSwitchPipeline : _NUPipeline {
    _NUChannelPort *_condition;
}

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)alias;
- (BOOL)isInline;
- (id)_evaluateOutputPort:(id)a0 context:(id)a1 error:(out id *)a2;

@end
