@class NSString;

@interface KTIDMSDevice : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *deviceID;
@property (retain) NSString *name;
@property (retain) NSString *pushToken;
@property (retain) NSString *model;
@property (retain) NSString *osVersion;
@property (retain) NSString *build;
@property (retain) NSString *serial;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
