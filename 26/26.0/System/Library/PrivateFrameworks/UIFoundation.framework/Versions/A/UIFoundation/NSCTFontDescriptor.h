@interface NSCTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)fontDescriptorWithFontAttributes:(id)a0 options:(unsigned long long)a1;
+ (id)fontDescriptorWithName:(id)a0 matrix:(id)a1;

- (unsigned long long)_cfTypeID;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;

@end
