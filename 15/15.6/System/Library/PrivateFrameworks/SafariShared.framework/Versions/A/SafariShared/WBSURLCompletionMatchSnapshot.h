@class NSURL, NSString, NSDate;

@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) long long matchLocation;
@property (readonly, nonatomic, getter=isTopHit) char topHit;
@property (readonly, nonatomic, getter=isSynthesizedTopHit) char synthesizedTopHit;
@property (readonly, nonatomic, getter=isTopHitDueToTriggerMatch) char topHitDueToTriggerMatch;
@property (readonly, nonatomic) long long visitCount;
@property (readonly, nonatomic) NSDate *lastVisitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1 matchLocation:(long long)a2 isTopHit:(char)a3 isSynthesizedTopHit:(char)a4 isTopHitDueToTriggerMatch:(char)a5 visitCount:(long long)a6 lastVisitTime:(id)a7;

@end
