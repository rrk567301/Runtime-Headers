@class NSString, NSMutableDictionary;

@interface PKVectorTimestamp : NSObject <NSCopying, CHStrokeProviderVersion> {
    NSMutableDictionary *_clock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)serialize;
- (id)shortDescription;
- (id)initWithArchive:(const void *)a0;
- (id)clockElementForUUID:(id)a0;
- (unsigned long long)clockForUUID:(id)a0;
- (unsigned long long)subclockForUUID:(id)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (void)incrementClockForUUID:(id)a0;
- (id)allUUIDs;
- (id)sortedUUIDs;
- (unsigned long long)compareTo:(id)a0;
- (void)mergeWithTimestamp:(id)a0;
- (void)saveToArchive:(void *)a0;
- (void)unionClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (long long)compareClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;

@end
