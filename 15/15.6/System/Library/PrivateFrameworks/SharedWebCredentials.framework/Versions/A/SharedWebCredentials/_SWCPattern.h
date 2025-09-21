@class NSString;

@interface _SWCPattern : NSObject <SWCRedactedDescription> {
    char _freeWhenDone;
}

@property (nonatomic) const struct SWCPatternStorage { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 2; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; char x7[0]; } *storage;
@property (readonly, getter=isBlocking) char blocking;
@property (readonly, getter=isCaseSensitive) char caseSensitive;
@property (readonly, getter=isPercentEncoded) char percentEncoded;
@property (readonly) NSString *requiredEntitlement;

+ (id)new;
+ (id)_debug:(char)a0 descriptionOfStorage:(const struct SWCPatternStorage { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 2; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; char x7[0]; } *)a1 forObject:(id)a2 redacted:(char)a3;
+ (id)_normalizedURLPath:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)redactedDescription;
- (id)_initWithPatternStorageNoCopy:(const struct SWCPatternStorage { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 2; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; char x7[0]; } *)a0 freeWhenDone:(char)a1;
- (unsigned long long)evaluateWithURLComponents:(id)a0 substitutionVariables:(id)a1 auditToken:(const struct { unsigned int x0[8]; } *)a2;
- (id)initWithDictionary:(id)a0 defaults:(id)a1;
- (id)initWithPathPattern:(id)a0 defaults:(id)a1;

@end
