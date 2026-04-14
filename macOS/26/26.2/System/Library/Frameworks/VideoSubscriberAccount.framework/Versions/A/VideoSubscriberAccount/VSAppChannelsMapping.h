@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject

@property (copy, nonatomic) NSString *appAdamID;
@property (copy, nonatomic) NSArray *channelIDs;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
