@class NSURL, NSString;

@interface DIStatFS : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *mountedOnURL;
@property (readonly, copy, nonatomic) NSString *mountedFrom;
@property (readonly, nonatomic) unsigned long long blockSize;
@property (readonly, nonatomic) char supportsBarrier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileDescriptor:(int)a0 error:(id *)a1;
- (void)logWithHeader:(id)a0;

@end
