@class NSData;

@interface Gossip : GPBMessage

@property (nonatomic) int version;
@property (copy, nonatomic) NSData *sth;

+ (id)descriptor;

@end
