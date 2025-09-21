@class NSString, GCPhysicalInputProfile, NSObject, GCKeyboardInput;
@protocol OS_dispatch_queue, GCDeviceSpatial;

@interface GCKeyboard : NSObject <GCDevice> {
    unsigned int _creationSequence;
}

@property (class, readonly) GCKeyboard *coalescedKeyboard;

@property (readonly, nonatomic) GCKeyboardInput *keyboardInput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *productCategory;
@property (readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property (readonly) id<GCDeviceSpatial> spatial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compareTo:(id)a0;
- (id)input;
- (id)init;
- (void).cxx_destruct;
- (id)haptics;
- (unsigned long long)creationSequence;

@end
