@interface NSCTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)fontDescriptorWithFontAttributes:(id)a0 options:(unsigned long long)a1;
+ (id)fontDescriptorWithName:(id)a0 matrix:(id)a1;

- (oneway void)release;
- (char)allowsWeakReference;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (unsigned long long)_cfTypeID;
- (id)objectForKey:(id)a0;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;

@end
