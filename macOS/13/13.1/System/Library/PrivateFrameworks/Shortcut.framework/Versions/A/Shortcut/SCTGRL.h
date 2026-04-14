@class NSMutableArray, NSMutableDictionary;

@interface SCTGRL : NSObject <NSCoding, NSCopying> {
    id mTitleComponent;
    NSMutableArray *mPath;
    NSMutableDictionary *mAttributes;
    SCTGRL *mParent;
    id mResource;
    NSMutableArray *mStateGRLs;
    float mDisplayPriority;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowsKeyedCoding;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)state;
- (id)path;
- (void)setState:(id)a0;
- (id)parent;
- (id)attributes;
- (id)key;
- (id)resource;
- (id)initWithResource:(id)a0;
- (id)title;
- (BOOL)isResolved;
- (void)hide:(id)a0;
- (unsigned long long)imageScaling;
- (void)perform;
- (void)show;
- (void)setParent:(id)a0;
- (id)imageTintColor;
- (float)displayPriority;
- (void)releaseResource;
- (void)show:(id)a0;
- (void)setResource:(id)a0;
- (void)extractAXAttributesFromAXElement:(struct __AXUIElement { } *)a0;
- (BOOL)isSearchableAttribute:(id)a0;
- (void)extractSearchableAttributesFromResource:(id)a0;
- (id)localizedKeys;
- (id)initWithResource:(id)a0 withParent:(id)a1;
- (id)commonAncestorsWith:(id)a0;
- (id)fullTitle;
- (id)titleComponent;
- (id)localizedCategory;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (BOOL)imageWantsNonVibrantAppearance;
- (void)resolveWithCallback:(SEL)a0 target:(id)a1;
- (void)resolveResourceAndInvoke:(id)a0;
- (id)resolveFromContainer:(id)a0;
- (void)enumerateDescendants:(id)a0 ofResource:(id)a1;
- (void)showState:(id)a0;
- (void)retainResource;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForResource;
- (id)availableStateGRLs;
- (void)addStateGRL:(id)a0;
- (id)availableStates;
- (Class)resolverClass;
- (id)pathVector;

@end
