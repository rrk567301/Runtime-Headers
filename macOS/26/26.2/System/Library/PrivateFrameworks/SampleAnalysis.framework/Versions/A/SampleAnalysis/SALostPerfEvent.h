@class NSString, SATimestamp;

@interface SALostPerfEvent : NSObject <SASerializable> {
    SATimestamp *_startTime;
    SATimestamp *_endTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SATimestamp *startTime;
@property (readonly) SATimestamp *endTime;
@property (readonly) NSString *domain;
@property (readonly) NSString *type;
@property (readonly) NSString *mode;
@property (readonly) NSString *source;
@property (readonly) NSString *lostPerf;

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)classDictionaryKey;

- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)addSelfToSerializationDictionary:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0;

@end
