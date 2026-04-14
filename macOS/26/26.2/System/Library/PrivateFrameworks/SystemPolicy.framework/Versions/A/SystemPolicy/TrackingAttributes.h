@interface TrackingAttributes : NSObject

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned short flags;

- (id)redactedDescription;
- (id)initWithData:(id)a0;
- (id)serialize;
- (id)description;

@end
