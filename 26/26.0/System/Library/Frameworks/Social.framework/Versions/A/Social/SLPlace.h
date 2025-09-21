@class NSString, NSURL;

@interface SLPlace : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (retain) NSURL *pictureURL;
@property (retain) NSString *category;
@property double latitude;
@property double longitude;
@property double distance;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)encodableProperties;

@end
