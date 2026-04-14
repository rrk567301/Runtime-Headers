@class NSString;

@interface CNCDManagedObjectContext : NSObject <CNCDManagedObjectContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executeFetchRequest:(id)a0 inContext:(id)a1;
+ (id)countForFetchRequest:(id)a0 inContext:(id)a1;
+ (void)withContext:(id)a0 performBlockAndWait:(id /* block */)a1;
+ (id)withContext:(id)a0 resultOfBlock:(id /* block */)a1;
+ (Class)strategyForContext:(id)a0;


@end
