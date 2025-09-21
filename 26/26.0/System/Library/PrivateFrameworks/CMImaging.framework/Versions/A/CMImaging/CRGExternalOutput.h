@protocol CRGSourceInternal, CRGSource;

@interface CRGExternalOutput : CRGExternal

@property (readonly, nonatomic) id<CRGSourceInternal> sourceInternal;
@property (retain, nonatomic) id<CRGSource> source;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 group:(id)a1;

@end
