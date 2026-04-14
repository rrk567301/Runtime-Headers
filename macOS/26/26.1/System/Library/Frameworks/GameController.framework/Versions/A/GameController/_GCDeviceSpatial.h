@class NSString, NSNumber;

@interface _GCDeviceSpatial : NSObject <GCDeviceSpatial> {
    NSNumber *_serviceRegistryID;
    long long _inherentChirality;
}

@property (readonly) unsigned long long trackingSourceIOServiceRegistryID;
@property (readonly) long long inherentChirality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;

@end
