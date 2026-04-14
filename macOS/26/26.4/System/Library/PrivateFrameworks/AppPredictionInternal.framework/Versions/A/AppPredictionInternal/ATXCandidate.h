@protocol BMStoreData;

@interface ATXCandidate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BMStoreData> biomeStoreData;

- (id)detailedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)type;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (id)initWithBiomeStoreData:(id)a0;
- (BOOL)isEqualToATXCandidate:(id)a0;
- (long long)suggestionExecutableType;

@end
