@class TSDStroke;

@interface TSCHSymbolPathCacheKey : NSObject <NSCopying> {
    int _symbolType;
    double _size;
    TSDStroke *_stroke;
    char _forHitCheck;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSymbolType:(int)a0 symbolSize:(double)a1 stroke:(id)a2 forHitCheck:(char)a3;

@end
