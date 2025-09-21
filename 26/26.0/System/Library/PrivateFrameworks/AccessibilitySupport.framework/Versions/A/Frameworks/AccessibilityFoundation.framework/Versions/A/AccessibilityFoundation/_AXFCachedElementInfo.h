@class NSValue;

@interface _AXFCachedElementInfo : NSObject <NSCopying>

@property (nonatomic) BOOL isOffscreen;
@property (nonatomic) BOOL isContainer;
@property (retain, nonatomic) NSValue *frame;
@property (weak, nonatomic) _AXFCachedElementInfo *container;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
