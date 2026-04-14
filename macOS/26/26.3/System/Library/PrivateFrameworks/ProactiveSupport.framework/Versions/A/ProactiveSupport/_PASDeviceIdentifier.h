@class NSUUID, NSString;

@interface _PASDeviceIdentifier : NSObject {
    NSString *_path;
}

@property (readonly) NSUUID *UUID;

- (id)init;
- (id)initWithBasePath:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
