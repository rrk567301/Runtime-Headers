@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject

@property (copy, nonatomic) NSString *appAdamID;
@property (copy, nonatomic) NSArray *channelIDs;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
