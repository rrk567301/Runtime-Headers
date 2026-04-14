@class NSString, _LTDirectedEdge;

@interface _LTDisambiguationUserSelection : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _LTDirectedEdge *edge;
@property (readonly, copy, nonatomic) NSString *sourceSnippet;
@property (readonly, nonatomic) unsigned long long linkIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithEdge:(id)a0 sourceSnippet:(id)a1 linkIndex:(unsigned long long)a2;

@end
