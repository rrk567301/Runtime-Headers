@interface CNContactPosterDataDirectCreateMethod : NSObject

+ (id)log;
+ (BOOL)execute:(id)a0 storeManager:(id)a1 error:(id *)a2;
+ (BOOL)updateOrInsertNewItems:(id)a0 inContext:(id)a1 forContactIdentifier:(id)a2 updateIsCurrent:(BOOL)a3 error:(id *)a4;

@end
