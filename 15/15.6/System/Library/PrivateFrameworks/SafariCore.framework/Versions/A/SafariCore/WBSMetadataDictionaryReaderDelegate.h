@class NSMutableDictionary, NSString, NSSet, NSError;

@interface WBSMetadataDictionaryReaderDelegate : NSObject <WBSJSONReaderDelegate> {
    unsigned long long _level;
    NSString *_lastKey;
    char _insideMetadata;
    NSSet *_validKeys;
    NSSet *_stringKeys;
    NSSet *_numberKeys;
}

@property (retain) NSMutableDictionary *metadataDictionary;
@property (retain) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (char)jsonReader:(id)a0 appendKey:(id)a1;
- (char)jsonReader:(id)a0 error:(id)a1;
- (char)jsonReader:(id)a0 scalarValue:(id)a1;
- (char)jsonReaderBeginArray:(id)a0;
- (char)jsonReaderBeginObject:(id)a0;
- (char)jsonReaderEndArray:(id)a0;
- (char)jsonReaderEndObject:(id)a0;

@end
