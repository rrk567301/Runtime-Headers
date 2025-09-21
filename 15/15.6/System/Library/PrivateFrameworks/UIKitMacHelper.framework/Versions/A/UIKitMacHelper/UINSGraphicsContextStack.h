@class NSString;

@interface UINSGraphicsContextStack : NSObject <UINSGraphicsContextStack>

@property (readonly) char currentContextIsFlipped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (char)getCurrentContext:(struct CGContext **)a0 type:(int *)a1 auxInfo:(void **)a2;
- (void)popContext;
- (void)pushContext:(struct CGContext { } *)a0 type:(int)a1 auxInfo:(void *)a2;

@end
