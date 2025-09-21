@interface CNUIImageProvider : NSObject

+ (id)imageForResource:(id)a0;
+ (id)cacheKeyForImageResourceName:(id)a0 template:(char)a1;
+ (id)imageForResource:(id)a0 template:(char)a1;
+ (id)imageForResource:(id)a0 template:(char)a1 onCacheMiss:(id /* block */)a2;
+ (id)uncachedImageForResource:(id)a0 template:(char)a1;

@end
