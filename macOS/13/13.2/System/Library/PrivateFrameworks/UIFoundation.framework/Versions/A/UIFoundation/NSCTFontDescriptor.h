@interface NSCTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithFontAttributes:(id)a0 options:(unsigned long long)a1;
+ (id)fontDescriptorWithName:(id)a0 matrix:(id)a1;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)fontAttributes;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;

@end
