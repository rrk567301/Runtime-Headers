@protocol BMStoreData;

@interface ATXCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<BMStoreData> biomeStoreData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)detailedDescription;
- (id)initWithBiomeStoreData:(id)a0;
- (char)isEqualToATXCandidate:(id)a0;
- (long long)suggestionExecutableType;

@end
