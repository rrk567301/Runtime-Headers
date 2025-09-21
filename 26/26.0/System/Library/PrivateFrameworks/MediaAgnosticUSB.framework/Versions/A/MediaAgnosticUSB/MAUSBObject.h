@class NSObject;
@protocol OS_os_log;

@interface MAUSBObject : NSObject {
    NSObject<OS_os_log> *_log;
}

- (id)debugDescription;
- (id)log;
- (id)description;
- (long long)refCount;
- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
