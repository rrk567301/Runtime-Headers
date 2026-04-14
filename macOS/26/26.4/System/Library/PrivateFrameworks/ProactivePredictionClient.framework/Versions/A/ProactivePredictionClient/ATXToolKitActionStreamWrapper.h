@class NSArray, NSError;

@interface ATXToolKitActionStreamWrapper : NSObject

+ (id)canonicalIdentifierForEncodedToolInvocationWithEncodedInvocation:(id)a0;
+ (void)enumerateToolKitEventsWithStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 bundleIDFilter:(id)a3 reversed:(BOOL)a4 enumerator:(id /* block */)a5;
+ (void)fetchTitlesFromToolInvocations:(NSArray *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
+ (BOOL)intentApprovedForSpotlightWithBundleID:(id)a0 intentClassName:(id)a1;
+ (id)lastDateForToolKitActionEvent;
+ (id)toolIDForSiriKitIntentWithBundleID:(id)a0 intentClassName:(id)a1;
+ (id)toolKitEventsWithStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 bundleIDFilter:(id)a3;

- (id)init;

@end
