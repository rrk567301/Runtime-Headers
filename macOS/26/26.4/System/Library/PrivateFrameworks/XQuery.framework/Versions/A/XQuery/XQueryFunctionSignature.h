@class XQueryQName;

@interface XQueryFunctionSignature : NSObject <NSCopying> {
    XQueryQName *_name;
    unsigned long long _argCount;
}

+ (id)functionSignature:(id)a0 argCount:(unsigned long long)a1;

- (void)finalize;
- (id)name;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned long long)argCount;
- (id)initWithQName:(id)a0 argCount:(unsigned long long)a1;

@end
