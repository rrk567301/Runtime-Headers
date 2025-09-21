@interface TrackingAttributes : NSObject

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned short flags;

- (id)initWithData:(id)a0;
- (id)serialize;
- (id)description;
- (id)redactedDescription;

@end
