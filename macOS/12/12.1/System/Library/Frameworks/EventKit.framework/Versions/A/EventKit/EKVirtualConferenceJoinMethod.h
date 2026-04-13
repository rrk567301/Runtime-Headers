@class NSString, NSURL;

@interface EKVirtualConferenceJoinMethod : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) BOOL isBroadcast;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 url:(id)a1;

@end
