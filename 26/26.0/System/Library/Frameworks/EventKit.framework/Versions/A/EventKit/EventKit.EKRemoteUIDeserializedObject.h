@class NSDictionary, EKObject;

@interface EventKit.EKRemoteUIDeserializedObject : NSObject {
    void /* function */ tempObjectIDMap;
}

@property (nonatomic, readonly) EKObject *deserializedObject;
@property (nonatomic, readonly) NSDictionary *tempObjectIDMap;

- (id)init;
- (void).cxx_destruct;

@end
