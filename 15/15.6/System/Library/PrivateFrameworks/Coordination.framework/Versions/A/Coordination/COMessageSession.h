@class NSString, COClusterMember;

@interface COMessageSession : NSObject

@property (nonatomic) char didUseRequest;
@property (nonatomic) char didUseResponse;
@property (nonatomic) char didUseNotice;
@property (nonatomic) unsigned long long startTime;
@property (readonly, retain, nonatomic) COClusterMember *member;
@property (readonly, copy, nonatomic) NSString *subTopic;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)stopWithNotice:(id)a0;
- (id)initWithMember:(id)a0;
- (id)messageChannel;

@end
