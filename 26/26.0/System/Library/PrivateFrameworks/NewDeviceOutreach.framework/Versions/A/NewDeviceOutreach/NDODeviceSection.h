@class NSString, NSMutableArray, NSArray;

@interface NDODeviceSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *label;
@property (retain) NSMutableArray *privateDeviceList;
@property (readonly) NSArray *deviceList;

- (void)addDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)deviceForSN:(id)a0;
- (id)initWithLabel:(id)a0 identifier:(id)a1;

@end
