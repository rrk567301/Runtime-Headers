@interface QCCompositionSortDescriptor : NSSortDescriptor

+ (id)descriptor;
+ (void)initialize;

- (long long)compareObject:(id)a0 toObject:(id)a1;

@end
