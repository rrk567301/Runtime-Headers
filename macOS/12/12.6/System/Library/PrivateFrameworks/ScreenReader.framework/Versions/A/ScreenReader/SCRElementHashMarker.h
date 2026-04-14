@class NSString, NSData, SCRCIndexMap;

@interface SCRElementHashMarker : NSObject {
    NSString *_title;
    NSString *_roleDescription;
    unsigned long long _mask;
    struct __AXUIElement { } *_elementRef;
    NSData *_context;
    unsigned long long _childCount;
    SCRCIndexMap *_attributes;
    unsigned long long _axChildIndex;
    unsigned long long _index;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    unsigned long long _roleHash;
    long long _type;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (long long)compareGeometry:(id)a0;
- (id)attributeForKey:(long long)a0;
- (BOOL)hasMask:(unsigned long long)a0;
- (void)updateMarker;

@end
