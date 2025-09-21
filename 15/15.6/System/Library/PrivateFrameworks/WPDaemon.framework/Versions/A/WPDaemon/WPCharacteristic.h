@class NSUUID, NSData;

@interface WPCharacteristic : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSUUID *uuid;
@property unsigned long long properties;
@property unsigned long long permissions;
@property (retain) NSData *data;
@property long long writeType;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
