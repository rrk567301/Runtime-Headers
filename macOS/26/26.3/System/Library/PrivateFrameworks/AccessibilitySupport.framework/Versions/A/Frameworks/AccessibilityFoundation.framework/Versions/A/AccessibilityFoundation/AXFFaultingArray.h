@class NSString, NSMutableIndexSet;
@protocol AXFFaultingArrayDataSource;

@interface AXFFaultingArray : NSArray <AXFFaultingArrayDataSource> {
    id *_elements;
}

@property (nonatomic) unsigned long long _count;
@property (retain, nonatomic) NSMutableIndexSet *_faultedBlocks;
@property (retain, nonatomic) id<AXFFaultingArrayDataSource> _source;
@property (nonatomic) unsigned long long blockSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)count;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)rebuild;
- (unsigned long long)_blockForIndex:(unsigned long long)a0;
- (void)_faultBlockIfNeeded:(unsigned long long)a0;
- (id)copyElementsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)elementsCount;
- (id)initWithSource:(id)a0 blockSize:(unsigned long long)a1;
- (id)nilSentinel;

@end
