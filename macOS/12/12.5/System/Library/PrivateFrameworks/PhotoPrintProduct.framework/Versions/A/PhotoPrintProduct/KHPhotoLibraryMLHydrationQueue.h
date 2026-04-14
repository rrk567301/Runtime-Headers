@class NSOperationQueue;

@interface KHPhotoLibraryMLHydrationQueue : NSObject

@property (readonly, nonatomic) NSOperationQueue *queue;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shared;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
