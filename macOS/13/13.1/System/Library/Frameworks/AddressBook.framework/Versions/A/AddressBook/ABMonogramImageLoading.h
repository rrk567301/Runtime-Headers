@interface ABMonogramImageLoading : NSObject

+ (id)executeTask:(id)a0;
+ (id)imageForPerson:(id)a0 options:(id)a1;
+ (id)loadImageForPerson:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
+ (id)imageForEmails:(id)a0 name:(id)a1 options:(id)a2;
+ (id)loadImageForEmails:(id)a0 name:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
+ (id)scheduleTask:(id)a0 completionHandler:(id /* block */)a1;
+ (id)taskScheduler;

@end
