@interface NSCTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)fontDescriptorWithFontAttributes:(id)a0 options:(unsigned long long)a1;
+ (id)fontDescriptorWithName:(id)a0 matrix:(id)a1;

- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (id)objectForKey:(id)a0;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;

@end
