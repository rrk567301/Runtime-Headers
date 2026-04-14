@class NSArray;

@interface XQuerySortItem : NSObject {
    id _value;
    long long _position;
    NSArray *_sortInfo;
}

- (long long)position;
- (void)finalize;
- (id)value;
- (void)dealloc;
- (id)initWithValue:(id)a0 sortInfo:(id)a1 forPosition:(long long)a2;
- (id)sortInfo;

@end
