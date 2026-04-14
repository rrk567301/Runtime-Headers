@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject

@property (copy, nonatomic) NSString *appAdamID;
@property (copy, nonatomic) NSArray *channelIDs;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
