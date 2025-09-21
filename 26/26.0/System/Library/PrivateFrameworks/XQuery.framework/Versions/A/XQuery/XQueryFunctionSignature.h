@class XQueryQName;

@interface XQueryFunctionSignature : NSObject <NSCopying> {
    XQueryQName *_name;
    unsigned long long _argCount;
}

+ (id)functionSignature:(id)a0 argCount:(unsigned long long)a1;

- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)argCount;
- (id)initWithQName:(id)a0 argCount:(unsigned long long)a1;

@end
