@class NSArray, NSNumber;

@interface SSRVoiceProfileStoreData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *vpArray;
@property (readonly, nonatomic) NSNumber *version;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVoiceProfileArray:(id)a0 withVersion:(id)a1;

@end
