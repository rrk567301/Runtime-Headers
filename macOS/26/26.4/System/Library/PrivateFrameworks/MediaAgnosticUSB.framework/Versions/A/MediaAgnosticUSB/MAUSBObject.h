@class NSObject;
@protocol OS_os_log;

@interface MAUSBObject : NSObject {
    NSObject<OS_os_log> *_log;
}

- (id)log;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (long long)refCount;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
