@class NSString;

@interface PHASEMixerInformation : NSObject

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long mixerType;

- (void).cxx_destruct;
- (id)uid;
- (void)setUid:(id)a0;

@end
