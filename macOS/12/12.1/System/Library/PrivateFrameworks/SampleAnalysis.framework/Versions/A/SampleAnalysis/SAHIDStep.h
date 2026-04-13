@class SATimestamp;

@interface SAHIDStep : NSObject {
    SATimestamp *_timestamp;
}

@property (readonly) unsigned int debugid;
@property (readonly) SATimestamp *timestamp;
@property (readonly) int pid;
@property (readonly) unsigned long long tid;

- (id)debugDescription;
- (void).cxx_destruct;

@end
