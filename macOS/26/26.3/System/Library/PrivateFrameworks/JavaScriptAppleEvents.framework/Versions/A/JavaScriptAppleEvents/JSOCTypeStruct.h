@class NSArray, NSString;

@interface JSOCTypeStruct : JSOCType {
    NSString *_tag;
    const char *_extendedObjCType;
}

@property (readonly) NSArray *properties;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (const char *)extendedObjCType;
- (id)initWithTag:(id)a0 properties:(id)a1;
- (id)structTag;

@end
