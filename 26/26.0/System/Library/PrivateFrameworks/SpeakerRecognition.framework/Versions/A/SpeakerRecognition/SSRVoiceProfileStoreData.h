@class NSArray, NSDictionary, NSNumber;

@interface SSRVoiceProfileStoreData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *vpArray;
@property (readonly, nonatomic) NSDictionary *enrollmentMetaDataDict;
@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSNumber *rpiDataRemovalStatus;
@property (readonly, nonatomic) NSDictionary *requestIdToAudioIdMap;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVoiceProfileArray:(id)a0 withVersion:(id)a1;
- (id)initWithVoiceProfileArray:(id)a0 withVersion:(id)a1 enrollmentSamplingMetaDataDict:(id)a2 requestIdAudioIdsMap:(id)a3;

@end
