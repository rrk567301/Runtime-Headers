@class NSUUID, NSString;

@interface _PASDeviceIdentifier : NSObject {
    NSString *_path;
}

@property (readonly) NSUUID *UUID;

- (id)initWithBasePath:(id)a0;
- (void)reset;
- (id)init;
- (void).cxx_destruct;

@end
