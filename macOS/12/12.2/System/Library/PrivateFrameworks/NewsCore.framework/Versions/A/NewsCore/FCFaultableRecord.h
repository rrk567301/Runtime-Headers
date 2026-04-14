@class NSString, NTPBRecordBase, NSData, PBCodable;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recordLock;
    PBCodable *_record;
    NSData *_recordData;
    NTPBRecordBase *_recordBase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)writeToKeyValuePair:(id)a0;

@end
