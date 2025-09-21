@class NSString;

@interface HMDAccessoryVersion : HMFSoftwareVersion <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *rawVersionString;

- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMatterVersionString:(id)a0;

@end
