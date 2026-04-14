@class NSDictionary;

@interface EventKit.EKRemoteUISerializedObject : NSObject {
    void /* function */ serializedObjectIDDictionary;
    void /* function */ objectIDToChangeSetDictionaryMap;
    void /* function */ objectIDToPersistentDictionaryMap;
}

@property (nonatomic, readonly) NSDictionary *serializedObjectIDDictionary;
@property (nonatomic, readonly) NSDictionary *objectIDToChangeSetDictionaryMap;
@property (nonatomic, readonly) NSDictionary *objectIDToPersistentDictionaryMap;

- (id)init;
- (void).cxx_destruct;

@end
