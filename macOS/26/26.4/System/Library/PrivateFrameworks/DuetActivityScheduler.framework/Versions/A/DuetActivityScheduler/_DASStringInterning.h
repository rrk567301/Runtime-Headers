@class NSMapTable;

@interface _DASStringInterning : NSObject

@property (retain, nonatomic) NSMapTable *internedStrings;
@property (nonatomic) unsigned long long lookups;
@property (nonatomic) unsigned long long interns;

+ (id)sharedInstance;

- (id)statistics;
- (void)purge;
- (void).cxx_destruct;
- (id)init;
- (id)internString:(id)a0;

@end
