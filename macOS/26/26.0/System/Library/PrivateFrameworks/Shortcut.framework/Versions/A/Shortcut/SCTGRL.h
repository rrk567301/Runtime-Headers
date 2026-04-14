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

- (void)setState:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)setParent:(id)a0;
- (id)state;
- (id)parent;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resource;
- (void)encodeWithCoder:(id)a0;
- (float)displayPriority;
- (id)path;
- (void)perform;
- (id)description;
- (id)title;
- (id)initWithResource:(id)a0;
- (id)imageTintColor;
- (id)key;
- (id)initWithCoder:(id)a0;
- (void)setResource:(id)a0;
- (id)attributes;
- (unsigned long long)hash;
- (id)availableStates;
- (BOOL)isEqual:(id)a0;
- (BOOL)isResolved;
- (void)hide:(id)a0;
- (unsigned long long)imageScaling;
- (void)show;
- (void)show:(id)a0;
- (void)releaseResource;
- (void)addStateGRL:(id)a0;
- (id)availableStateGRLs;
- (id)commonAncestorsWith:(id)a0;
- (void)enumerateDescendants:(id)a0 ofResource:(id)a1;
- (void)extractAXAttributesFromAXElement:(struct __AXUIElement { } *)a0;
- (void)extractSearchableAttributesFromResource:(id)a0;
- (id)fullTitle;
- (BOOL)imageWantsNonVibrantAppearance;
- (id)initWithResource:(id)a0 withParent:(id)a1;
- (BOOL)isSearchableAttribute:(id)a0;
- (id)localizedCategory;
- (id)localizedKeys;
- (id)pathVector;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (id)resolveFromContainer:(id)a0;
- (void)resolveResourceAndInvoke:(id)a0;
- (void)resolveWithCallback:(SEL)a0 target:(id)a1;
- (Class)resolverClass;
- (void)retainResource;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForResource;
- (void)showState:(id)a0;
- (id)titleComponent;

@end
