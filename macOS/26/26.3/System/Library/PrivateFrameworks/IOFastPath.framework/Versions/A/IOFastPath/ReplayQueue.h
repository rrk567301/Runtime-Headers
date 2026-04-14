@class NSMutableData;

@interface ReplayQueue : NSObject {
    NSMutableData *queueMem;
    unsigned int numEntries;
    unsigned int entrySize;
    unsigned long long seq;
    unsigned int nextWriteIdx;
    unsigned int generation;
    struct { unsigned long long seq; unsigned int idx; unsigned int generation; } cursor;
}

+ (id)queueWithCapacity:(unsigned int)a0 entrySize:(unsigned int)a1;

- (int)enqueue:(id)a0;
- (void).cxx_destruct;
- (struct { unsigned long long x0; unsigned char x1[0]; } *)entryAtIndex:(unsigned long long)a0;
- (BOOL)entry:(unsigned int)a0 isValid:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned int)a0 entrySize:(unsigned int)a1;
- (int)readCurrent:(id)a0;
- (int)readLatest:(id)a0;
- (int)readNext:(id)a0;
- (int)readPrevious:(id)a0;

@end
