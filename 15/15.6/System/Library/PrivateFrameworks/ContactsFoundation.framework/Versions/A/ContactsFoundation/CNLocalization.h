@interface CNLocalization : NSObject

+ (id)localizedStringForInteger:(long long)a0;
+ (id)localizedStringForString:(id)a0 bundle:(id)a1 table:(id)a2 lookupBlock:(id /* block */)a3 returningNilIfNotFound:(char)a4;
+ (id)localizedStringForString:(id)a0 bundle:(id)a1 table:(id)a2 returningNilIfNotFound:(char)a3;
+ (id)localizedStringForString:(id)a0 class:(Class)a1 lookupBlock:(id /* block */)a2 returningNilIfNotFound:(char)a3;
+ (id)localizedStringForString:(id)a0 class:(Class)a1 returningNilIfNotFound:(char)a2;

@end
