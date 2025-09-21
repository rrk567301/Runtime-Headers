@class NSArray, NSData;

@interface CHSRemoteDevicesBox : NSObject <CHSXPCEncodable> {
    NSData *_archivedData;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *devices;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevices:(id)a0;
- (void)prepareForEncoding;

@end
