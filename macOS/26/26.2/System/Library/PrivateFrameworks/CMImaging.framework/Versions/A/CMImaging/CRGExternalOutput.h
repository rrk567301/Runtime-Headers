@protocol CRGSourceInternal, CRGSource;

@interface CRGExternalOutput : CRGExternal

@property (readonly, nonatomic) id<CRGSourceInternal> sourceInternal;
@property (retain, nonatomic) id<CRGSource> source;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 group:(id)a1;

@end
