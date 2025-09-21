@class NSString, NSData, NSNumber, _MRMRNowPlayingAudioFormatContentInfoProtobuf;

@interface MRNowPlayingAudioFormatContentInfo : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSNumber *audioSessionID;
@property (readonly, nonatomic) NSNumber *audioFormat;
@property (readonly, nonatomic) NSNumber *channelCount;
@property (readonly, nonatomic) NSString *bestAvailableContent;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRMRNowPlayingAudioFormatContentInfoProtobuf *protobuf;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *audioFormatDescription;
@property (readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property (readonly, nonatomic) long long bestAvailableAudioFormat;
@property (readonly, nonatomic, getter=isMultichannel) BOOL multichannel;
@property (readonly, nonatomic, getter=isEligibleForSpatialization) BOOL eligibleForSpatialization;
@property (readonly, nonatomic, getter=isSpatialized) BOOL spatialized;
@property (nonatomic) long long intendedSpatialExperience;
@property (nonatomic) long long resolvedSpatialExperience;
@property (nonatomic) long long renderingMode;

- (id)initWithData:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (id)initWithPid:(int)a0 bundleID:(id)a1 audioSessionID:(id)a2 audioFormat:(id)a3 channelCount:(id)a4 bestAvailableContent:(id)a5 isEligibleForSpatialization:(id)a6 isSpatialized:(id)a7;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
