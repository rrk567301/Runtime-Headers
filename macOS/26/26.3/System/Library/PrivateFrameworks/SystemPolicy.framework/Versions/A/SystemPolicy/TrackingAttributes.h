@interface TrackingAttributes : NSObject

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned short flags;

- (id)initWithData:(id)a0;
- (id)description;
- (id)serialize;
- (id)redactedDescription;

@end
