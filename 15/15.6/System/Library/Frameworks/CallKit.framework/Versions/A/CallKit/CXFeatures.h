@interface CXFeatures : NSObject

@property (readonly, nonatomic) char callManagementMuteControl;
@property (readonly, nonatomic, getter=isChannelEnabled) char channelEnabled;

@end
