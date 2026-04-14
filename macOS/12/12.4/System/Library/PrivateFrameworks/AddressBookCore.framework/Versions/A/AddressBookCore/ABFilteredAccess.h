@interface ABFilteredAccess : NSObject

+ (id /* block */)transformForFilteringRecord:(id)a0 property:(id)a1;
+ (BOOL)recordIsUnfiltered:(id)a0;
+ (id /* block */)transformForRecord:(id)a0 property:(id)a1;
+ (id)filterValue:(id)a0 forRecord:(id)a1 property:(id)a2;

@end
