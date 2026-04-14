@class NSString, NSObject;

@interface HMCoreAnalyticsFieldData : HMFObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSObject *value;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)initWithName:(id)a0;

@end
