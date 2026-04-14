@class NSObject;
@protocol OS_os_log;

@interface MAUSBObject : NSObject {
    NSObject<OS_os_log> *_log;
}

- (long long)refCount;
- (id)log;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
