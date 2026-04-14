@class NSDictionary, EKObject;

@interface EventKit.EKRemoteUIDeserializedObject : NSObject {
    void /* function */ tempObjectIDMap;
}

@property (nonatomic, readonly) EKObject *deserializedObject;
@property (nonatomic, readonly) NSDictionary *tempObjectIDMap;

- (void).cxx_destruct;
- (id)init;

@end
