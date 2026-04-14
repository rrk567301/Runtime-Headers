@class NSString, NSURL;

@interface STMOpticalDisk : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *formatsString;
@property (copy, nonatomic) NSString *modelNumber;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
