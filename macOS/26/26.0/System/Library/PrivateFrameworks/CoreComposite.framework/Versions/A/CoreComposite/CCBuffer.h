@class NSMutableArray, CCData;

@interface CCBuffer : CCResource

@property (retain, nonatomic) NSMutableArray *attachedData;
@property (readonly, nonatomic) long long headIndex;
@property (readonly, nonatomic) long long availableIndex;
@property (nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) CCData *lastUsedObject;

- (id)lastObject;
- (id)nextObject;
- (id)init;
- (void).cxx_destruct;
- (void)releaseBuffers;
- (id)initWithBufferSize:(unsigned long long)a0;
- (BOOL)hasAttachedData;
- (void)finishedWithDataAtIndex:(long long)a0;
- (id)objectForHandle:(id /* block */)a0;
- (BOOL)reallocateResourcesWithDeviceGroup:(id)a0;
- (long long)reserveData;

@end
