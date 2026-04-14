@class NSString, NSUUID, NSURL;

@interface WBSAutoFillEvent : NSObject

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) NSUUID *tabID;
@property (nonatomic) BOOL isPrivateTab;
@property (readonly, nonatomic) NSString *domain;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long machTimestamp;
@property (readonly, nonatomic) unsigned long long timeIntervalSinceTimestamp;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 tabID:(id)a1 isPrivateTab:(BOOL)a2 url:(id)a3;

@end
