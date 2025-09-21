@class NSSet, NSMutableSet, NSObject;
@protocol OS_nw_activity;

@interface HMDNetworkActivityWrapper : NSObject

@property (readonly, nonatomic) NSMutableSet *mutableChildren;
@property (nonatomic) char completed;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *activity;
@property (readonly, nonatomic) char isActivated;
@property (readonly, nonatomic) unsigned long long label;
@property (readonly, weak, nonatomic) HMDNetworkActivityWrapper *parent;
@property (readonly, nonatomic) NSSet *children;

- (void).cxx_destruct;
- (void)activate;
- (void)setParent:(id)a0;
- (id)initWithLabel:(unsigned long long)a0;
- (id)childActivityWithLabel:(unsigned long long)a0 createIfNeeded:(char)a1;
- (void)completeWithSuccess:(char)a0;
- (void)submitMetrics:(id)a0 withName:(id)a1;

@end
