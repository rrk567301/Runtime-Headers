@interface PXPeopleMergeUtilities : NSObject

+ (char)canMergeWithPeople:(id)a0;
+ (id)mergeAlertControllerWithNominalPeople:(id)a0 targetPerson:(id)a1 shouldHandleMergeInternally:(char)a2 completion:(id /* block */)a3;

- (id)init;

@end
