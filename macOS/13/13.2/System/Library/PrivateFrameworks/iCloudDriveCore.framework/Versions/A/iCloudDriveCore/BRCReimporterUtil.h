@interface BRCReimporterUtil : NSObject

+ (void)reimportItemsBelowItemWithIdentifier:(id)a0 error:(id *)a1;
+ (void)ingestFromCacheItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
