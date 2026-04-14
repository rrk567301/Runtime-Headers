@class TSSStyle;

@interface TSSStyleComparison : NSObject {
    TSSStyle *_first;
    TSSStyle *_second;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithStyle:(id)a0 andStyle:(id)a1;

@end
