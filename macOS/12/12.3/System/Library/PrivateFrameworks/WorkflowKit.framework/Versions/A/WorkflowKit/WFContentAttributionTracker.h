@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFContentAttributionTracker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *attributionSets;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackingAttributionSetQueue;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributionSetForParameter:(id)a0;
- (id)trackedAttributionSet;
- (void)addAttributionSet:(id)a0 forParameter:(id)a1;
- (id)initWithAttributionSets:(id)a0;

@end
