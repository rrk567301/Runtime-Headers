@class NSString, NSUUID;

@interface SharingSessionSerialized : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init:(id)a0 Title:(id)a1;

@end
