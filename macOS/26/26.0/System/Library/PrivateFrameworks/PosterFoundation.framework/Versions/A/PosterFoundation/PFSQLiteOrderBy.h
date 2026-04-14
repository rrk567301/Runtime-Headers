@class NSString, NSMutableOrderedSet;

@interface PFSQLiteOrderBy : NSObject <PFSQLConvertible> {
    NSMutableOrderedSet *_comparison;
}

@property (readonly, nonatomic) NSMutableOrderedSet *columns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (long long)comparisonForColumn:(id)a0;
- (id)initWithColumn:(id)a0 comparison:(long long)a1;
- (id)orderByColumn:(id)a0 comparison:(long long)a1;
- (id)pf_toSQLWithBindings:(out unsigned long long *)a0;

@end
