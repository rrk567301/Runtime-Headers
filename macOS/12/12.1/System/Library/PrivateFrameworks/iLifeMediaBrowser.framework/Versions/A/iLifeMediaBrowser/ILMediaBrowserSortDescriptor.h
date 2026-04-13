@interface ILMediaBrowserSortDescriptor : NSSortDescriptor

+ (id)stringForSortDescriptors:(id)a0;
+ (id)sortDescriptorsFromString:(id)a0;

- (long long)compareObject:(id)a0 toObject:(id)a1;
- (id)reversedSortDescriptor;

@end
