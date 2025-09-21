@class NSString, NSURL;

@interface CalVirtualConferenceJoinMethod : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) char isBroadcast;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 URL:(id)a1 isBroadcast:(char)a2;

@end
