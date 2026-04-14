@class NSString;

@interface AASensorInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *transport;
@property (readonly, nonatomic) unsigned long long usage;
@property (readonly, nonatomic) unsigned long long usagePage;
@property (nonatomic) int pid;
@property (readonly, copy, nonatomic) NSString *btAddress;

- (void)clearData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)update:(id)a0;
- (void).cxx_destruct;
- (id)initWithBTAddress:(id)a0;

@end
