@interface PLPropertyListFilter : NSObject

+ (id)filterPropertyList:(id)a0;
+ (id)_filterArray:(id)a0 block:(id /* block */)a1;
+ (BOOL)canEncodeInPropertyList:(id)a0;
+ (id)filterPropertyList:(id)a0 block:(id /* block */)a1;
+ (id)filterPropertyListNoData:(id)a0;
+ (id)_filterDictionary:(id)a0 block:(id /* block */)a1;

@end
