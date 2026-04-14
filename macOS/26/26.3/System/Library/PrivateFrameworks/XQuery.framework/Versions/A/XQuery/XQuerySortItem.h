@class NSArray;

@interface XQuerySortItem : NSObject {
    id _value;
    long long _position;
    NSArray *_sortInfo;
}

- (void)finalize;
- (long long)position;
- (void)dealloc;
- (id)value;
- (id)initWithValue:(id)a0 sortInfo:(id)a1 forPosition:(long long)a2;
- (id)sortInfo;

@end
