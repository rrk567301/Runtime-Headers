@class NSString, NSURL;

@interface EKVirtualConferenceJoinMethod : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) BOOL isBroadcast;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 url:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
