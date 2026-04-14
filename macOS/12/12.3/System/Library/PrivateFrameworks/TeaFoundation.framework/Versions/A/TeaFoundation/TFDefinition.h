@class Protocol;
@protocol TFDefinitionContainer;

@interface TFDefinition : NSObject {
    id<TFDefinitionContainer> _privateAccessContainer;
    id<TFDefinitionContainer> _privateAccessWeakContainer;
}

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) Class cls;
@property (retain, nonatomic) Protocol *protocol;
@property (copy, nonatomic) id /* block */ factory;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) BOOL canBeOverridden;
@property (nonatomic) BOOL canBeNil;
@property (copy, nonatomic) id /* block */ validationBlock;
@property (copy, nonatomic) id /* block */ configurationBlock;

- (id)description;
- (void).cxx_destruct;
- (id)withValidation:(id /* block */)a0;
- (id)inScope:(unsigned long long)a0;
- (id)canBeOverridden:(BOOL)a0;
- (id)canBeNil:(BOOL)a0;
- (id)withConfiguration:(id /* block */)a0;
- (id)privateAccessContainer;
- (id)initWithClass:(Class)a0 factory:(id /* block */)a1;
- (id)initWithProtocol:(id)a0 factory:(id /* block */)a1;
- (id)initWithUnsafeFactory:(id /* block */)a0;
- (id)withPrivateAccessInWeakContainer:(id)a0;
- (id)withPrivateAccessInContainer:(id)a0;

@end
