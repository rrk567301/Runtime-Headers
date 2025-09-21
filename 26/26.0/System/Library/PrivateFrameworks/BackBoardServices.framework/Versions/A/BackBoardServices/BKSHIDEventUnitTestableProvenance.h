@class NSString;

@interface BKSHIDEventUnitTestableProvenance : NSObject <BKSHIDEventProvenance> {
    BOOL _authentic;
}

@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) unsigned int eventType;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valid;
+ (id)invalid;
+ (id)validWithTimestamp:(unsigned long long)a0;

- (BOOL)isAuthentic;

@end
