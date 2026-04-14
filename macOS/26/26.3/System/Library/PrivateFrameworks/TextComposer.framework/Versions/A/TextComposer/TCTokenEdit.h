@class TCTokenInfo;

@interface TCTokenEdit : NSObject <NSCopying>

@property (readonly) long long operation;
@property (readonly, copy) TCTokenInfo *inputToken;
@property (readonly, copy) TCTokenInfo *outputToken;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithOperation:(long long)a0 inputToken:(id)a1 outputToken:(id)a2;

@end
