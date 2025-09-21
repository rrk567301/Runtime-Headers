@class NSString, HMFActivity;

@interface HMBProcessingOptions : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char requiresModelCreation;
@property char disallowsModelCreation;
@property (readonly, copy, nonatomic) NSString *label;
@property (nonatomic) char shouldEnqueueMirrorOutput;
@property (nonatomic) char shouldRollBackIfMirrorOutputFails;
@property (nonatomic) char disallowsCellularAccessForMirrorOutput;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) HMFActivity *activity;
@property (nonatomic) unsigned long long transactionItemsBatchLimit;

+ (id)optionsWithLabel:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0;
- (id)attributeDescriptions;

@end
