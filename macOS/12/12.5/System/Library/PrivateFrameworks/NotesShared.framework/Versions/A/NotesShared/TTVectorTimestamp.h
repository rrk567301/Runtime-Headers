@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying> {
    NSMutableDictionary *_clock;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithArchive:(const void *)a0;
- (id)clockElementForUUID:(id)a0;
- (void)saveToArchive:(void *)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (unsigned long long)clockForUUID:(id)a0;
- (void)mergeWithTimestamp:(id)a0;
- (unsigned long long)compareTo:(id)a0;
- (id)allUUIDs;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)a0;
- (void)incrementClockForUUID:(id)a0;

@end
