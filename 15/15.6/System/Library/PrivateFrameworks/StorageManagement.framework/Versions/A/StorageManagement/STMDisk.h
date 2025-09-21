@class NSString, NSArray;

@interface STMDisk : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *volumes;
@property (nonatomic) char isInternal;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
