@protocol BMStoreData;

@interface ATXCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BMStoreData> biomeStoreData;

- (id)detailedDescription;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithBiomeStoreData:(id)a0;
- (BOOL)isEqualToATXCandidate:(id)a0;
- (long long)suggestionExecutableType;

@end
