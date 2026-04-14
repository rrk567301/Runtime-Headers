@interface DMCRatchet : NSObject

+ (BOOL)isEnabled;
+ (BOOL)isAuthorizedForOperation:(unsigned long long)a0;
+ (void)isAuthorizedForOperation:(unsigned long long)a0 completion:(id /* block */)a1;

@end
