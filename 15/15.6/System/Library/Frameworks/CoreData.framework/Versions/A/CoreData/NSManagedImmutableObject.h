@class NSEntityDescription, NSManagedObjectID;

@interface NSManagedImmutableObject : NSObject

@property (readonly) NSEntityDescription *entity;
@property (readonly) NSManagedObjectID *objectID;

+ (void)release;
+ (id)retain;
+ (Class)classForEntity:(id)a0;
+ (struct { int x0; void *x1; id x2; unsigned long long x3; unsigned char x4; unsigned long long x5; void *x6; id x7; char *x8; struct _moFactoryClassFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned int x6 : 26; } x9; } *)_PFMOClassFactoryData;
+ (char)_isGeneratedClass;
+ (char)_isGeneratedClass_1;
+ (void)_release_1;
+ (id)_retain_1;
+ (id)allocWithEntity:(id)a0;

- (void /* function */ *)methodForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (id)valueForKey:(id)a0;

@end
