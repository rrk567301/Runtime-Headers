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
- (void)addTimeInterval:(double)a0;
- (BOOL)isEmpty;
- (double)readDouble;
- (id)readString;
- (void)addBool:(BOOL)a0;
- (void)addInteger:(long long)a0;
- (BOOL)readBool;
- (id)readDate;
- (id)initWithFieldCapacity:(unsigned long long)a0;
- (void)resetForWriting;
- (void)rewindForReading;
- (id)dropDef;
- (BOOL)bucketIsFull;
- (int)grabBufferOffsetOfSize:(int)a0;
- (const char *)bufferForOffset:(int)a0;
- (char *)addVarcharOfLength:(int)a0;
- (void)addDouble:(double)a0;
- (void)addDataBlob:(id)a0;
- (void)addNull;
- (BOOL)writeNextDrop;
- (BOOL)readNextDrop;
- (id)nextObjectForType:(int)a0;
- (BOOL)currentFieldIsNull;
- (id)modelIdAtIndex:(unsigned long long)a0;
- (id)readIntegerAsNumber;
- (long long)readInteger;
- (id)readDecimalAsNumber;
- (double)readTimeInterval;
- (id)readDataBlob;

@end
