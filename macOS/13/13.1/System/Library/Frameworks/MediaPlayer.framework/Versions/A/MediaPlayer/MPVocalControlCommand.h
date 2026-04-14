@class NSNumber;

@interface MPVocalControlCommand : MPRemoteCommand

@property (copy, nonatomic) NSNumber *vocalControlEnabled;
@property (copy, nonatomic) NSNumber *vocalControlLevel;
@property (copy, nonatomic) NSNumber *minVocalControlLevel;
@property (copy, nonatomic) NSNumber *maxVocalControlLevel;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;

@end
