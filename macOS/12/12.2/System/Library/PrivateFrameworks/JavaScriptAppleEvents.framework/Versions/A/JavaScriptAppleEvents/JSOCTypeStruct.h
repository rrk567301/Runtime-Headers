@class NSArray, NSString;

@interface JSOCTypeStruct : JSOCType {
    NSString *_tag;
    const char *_extendedObjCType;
}

@property (readonly) NSArray *properties;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTag:(id)a0 properties:(id)a1;
- (const char *)extendedObjCType;
- (id)structTag;

@end
