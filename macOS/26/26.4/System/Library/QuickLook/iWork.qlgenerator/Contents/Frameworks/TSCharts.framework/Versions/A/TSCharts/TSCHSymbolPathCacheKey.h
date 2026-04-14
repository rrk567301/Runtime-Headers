@class TSDStroke;

@interface TSCHSymbolPathCacheKey : NSObject <NSCopying> {
    int _symbolType;
    double _size;
    TSDStroke *_stroke;
    BOOL _forHitCheck;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSymbolType:(int)a0 symbolSize:(double)a1 stroke:(id)a2 forHitCheck:(BOOL)a3;

@end
