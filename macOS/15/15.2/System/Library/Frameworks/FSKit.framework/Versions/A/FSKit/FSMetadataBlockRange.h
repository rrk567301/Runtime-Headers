@interface FSMetadataBlockRange : NSObject

@property (readonly) long long startBlockOffset;
@property (readonly) unsigned int blockLength;
@property (readonly) unsigned int numberOfBlocks;

+ (id)rangeWithOffset:(long long)a0 blockLength:(unsigned int)a1 numberOfBlocks:(unsigned int)a2;

- (id)initWithOffset:(long long)a0 blockLength:(unsigned int)a1 numberOfBlocks:(unsigned int)a2;

@end
