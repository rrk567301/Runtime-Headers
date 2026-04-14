@class DEMatchCriteria;

@interface DEFilter : NSObject

@property (retain, nonatomic) DEMatchCriteria *include;
@property (retain, nonatomic) DEMatchCriteria *exclude;

+ (void)filterToPb:(id)a0 filterPb:(void *)a1;
+ (id)filterFromPb:(const void *)a0;
+ (id)catUpdates:(id)a0;
+ (id)filterThroughPb:(id)a0;
+ (id)catUpdates;
+ (id)deprecatedCatSummary;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)apply:(id /* block */)a0 to:(id)a1;
- (BOOL)allows:(id)a0;
- (id)initWithInclude:(id)a0 exclude:(id)a1;

@end
