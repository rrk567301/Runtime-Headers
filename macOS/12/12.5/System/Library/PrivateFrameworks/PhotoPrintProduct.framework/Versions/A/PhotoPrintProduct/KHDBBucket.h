@class KHDBDropDef;

@interface KHDBBucket : NSObject {
    KHDBDropDef *_dropDef;
    unsigned long long _dropCount;
    unsigned long long _bytesCapacity;
    char *_dropStorage;
    char *_stringStorage;
    unsigned long long _stringCapacity;
    unsigned long long _stringsUsed;
    unsigned long long _dropIndex;
    int _nextNullIndex;
    int _previousNullIndex;
}

@property (nonatomic) unsigned long long dropCapacity;
@property (nonatomic) unsigned long long fieldIndex;
@property (nonatomic) unsigned long long dropOffset;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (void)addTimeInterval:(double)a0;
- (double)readDouble;
- (id)readString;
- (void)addBool:(BOOL)a0;
- (void)addInteger:(long long)a0;
- (BOOL)readBool;
- (id)readDate;
- (void)rewindForReading;
- (id)dropDef;
- (BOOL)readNextDrop;
- (id)modelIdAtIndex:(unsigned long long)a0;
- (void)addNull;
- (char *)addVarcharOfLength:(int)a0;
- (void)addDouble:(double)a0;
- (void)addDataBlob:(id)a0;
- (id)initWithFieldCapacity:(unsigned long long)a0;
- (void)resetForWriting;
- (BOOL)writeNextDrop;
- (id)nextObjectForType:(int)a0;
- (id)readIntegerAsNumber;
- (long long)readInteger;
- (id)readDataBlob;
- (BOOL)bucketIsFull;
- (int)grabBufferOffsetOfSize:(int)a0;
- (id)readDecimalAsNumber;
- (BOOL)currentFieldIsNull;
- (const char *)bufferForOffset:(int)a0;
- (double)readTimeInterval;

@end
