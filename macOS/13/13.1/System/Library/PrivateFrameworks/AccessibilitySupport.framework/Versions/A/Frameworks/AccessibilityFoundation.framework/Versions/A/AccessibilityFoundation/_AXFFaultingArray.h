@class NSString, NSMutableIndexSet;
@protocol _AXFFaultingArrayDataSource;

@interface _AXFFaultingArray : NSArray <_AXFFaultingArrayDataSource> {
    id *_elements;
}

@property (nonatomic) unsigned long long _count;
@property (retain, nonatomic) NSMutableIndexSet *_faultedBlocks;
@property (nonatomic) unsigned long long _blockSize;
@property (retain, nonatomic) id<_AXFFaultingArrayDataSource> _source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)initWithSource:(id)a0;
- (void)rebuild;
- (id)copyElementsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)elementsCount;
- (id)nilSentinel;
- (id)initWithSource:(id)a0 blockSize:(unsigned long long)a1;
- (unsigned long long)_blockForIndex:(unsigned long long)a0;
- (void)_faultBlockIfNeeded:(unsigned long long)a0;

@end
