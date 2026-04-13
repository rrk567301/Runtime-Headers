@interface NSCTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)fontDescriptorWithFontAttributes:(id)a0 options:(unsigned long long)a1;
+ (id)fontDescriptorWithName:(id)a0 matrix:(id)a1;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)objectForKey:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (id)fontAttributes;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;

@end
