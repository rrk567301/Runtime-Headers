@class NSString, NSArray;

@interface STMDisk : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *volumes;
@property (nonatomic) BOOL isInternal;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
